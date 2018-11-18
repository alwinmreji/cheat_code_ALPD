//https://www.hackerrank.com/challenges/repeated-string/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup
#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n)
{
    long len=0,i=0, count=0;
    while(s[i]!='\0')
    {
        if (s[i]=='a')
            count++;
        len++;
        i++;
    }
    i=n/len;
    count*=i;
    i=n%len;
    for(int j=0; j<i; j++)
        if (s[j]=='a')
            count++;
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
