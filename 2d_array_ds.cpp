//https://www.hackerrank.com/challenges/2d-array/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr)
{
    int max=-2147483648,sum=0;
    for (int i=1; i<=4; i++)
    {
        for(int j=0; j<=3; j++)
        {
            sum=arr[(j)][i-1]+arr[j][i]+arr[j][i+1]+arr[j+1][i]+arr[j+2][i-1]+arr[j+2][i]+arr[j+2][i+1];
            if(sum>max)
                max=sum;
        }
        sum=0;
    }
    return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
