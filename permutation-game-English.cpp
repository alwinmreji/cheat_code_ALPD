//https://www.hackerrank.com/challenges/permutation-game/problem
#include <cmath>
#include <cstdio>
#include <climits>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_increasing(const vector<int>& v, int mask)
{
    int last = INT_MAX;
    for (int i = v.size() - 1; i >= 0; i --)
    {
        if (mask & (1 << i)) {
            if (v[i] >= last) {
                return false;
            }

            last = v[i];
        }
    }

    return true;
}


bool win(const vector<int>& v, int mask, bool is_alice, vector<short>& masks)
{
    if (masks[mask] == -1)
        masks[mask] = is_increasing(v, mask);
    else if (masks[mask] == 0)
        return is_alice;

    if (masks[mask] == 1)
        return ! is_alice;

    int copy = mask;
    while (copy)
    {
        int last_bit = copy & (~(copy-1));
        copy ^= last_bit;
        int newmask = mask ^ last_bit;
        if (is_alice == win(v, newmask, !is_alice, masks))
        {
            masks[newmask] = true;
            return is_alice;
        }
    }

    masks[mask] = false;
    return ! is_alice;
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0 ; i < n ; i ++ )
        cin >> v[i];

    int total = pow(2,n);
    vector<short> masks(total, -1);

    int start_mask = total - 1; // n '1' bits
    if (win(v, start_mask, true, masks))
        cout << "Alice" << endl;
    else
        cout << "Bob" << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i ++)
        solve();
    return 0;
}
