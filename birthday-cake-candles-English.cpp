//https://www.hackerrank.com/challenges/birthday-cake-candles/problem
#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    int grt=0, count=0;
    for (int i=0; i<n; i++)
        if (ar[i]>grt)
            grt=ar[i];
    for (int j=0; j<n; j++)
        if (ar[j]==grt)
            count++;
    return (count);
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
