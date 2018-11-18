//https://www.hackerrank.com/challenges/time-conversion/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int temp;
    char in[10], out[8];
    cin>>in;
    if (in[8]=='P' && (in[1]!='2'|| in[0]!='1'))
    {
        if (in[1]>='8')
        {
            temp=in[1]-'8';
            in[1]='0'+temp;
            in[0]+=2;
        }
        else if (in[0]=='1')
        {
            in[0]++;
            in[1]+=2;
        }
        else if (in[0]='0')
        {
            in[0]++;
            temp=in[1]-'0';
            in[1]='2'+temp;
        }
    }
    if (in[8]=='A' && in[1]=='2' && in [0]=='1')
    {
        in[0]='0';
        in[1]='0';
    }
    //else
    //{
        for (int i=0; i<=7; i++)
        {
            cout<<in[i];
        }
    //}
    return 0;
}
