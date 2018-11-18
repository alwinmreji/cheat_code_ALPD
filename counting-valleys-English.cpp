//https://www.hackerrank.com/challenges/counting-valleys/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup
#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s)
{
    int count=0,ch=0,vally=0;
    for (int i=0; i<n; i++)
    {
        if (s[i]=='U')
            ++count;
        else if (s[i]=='D')
            --count;
        if (count<0 && ch==0)
        {
            ch=-1;
            ++vally;
        }
        if (count>=0)
            ch=0;
    }
    return vally;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
