#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfStones function below.
string gameOfStones(int n) {
    string s1="First",s2="Second";
  int a=n%7;
    if(a==1 || a==0)
        return s2;
    else
        return s1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = gameOfStones(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
