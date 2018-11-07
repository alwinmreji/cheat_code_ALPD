//https://www.hackerrank.com/challenges/frequency-of-digits-1/problem
//counts the number of digits in the string and displays frequencies of digits from 0 to 9
#include<stdio.h>
#include<string.h>
void main()
{
char str[1001];
scanf("%s", str);
int count[10] = {0,0,0,0,0,0,0,0,0,0};
for (int i = 0; i < strlen(str); ++i) {
    if (str[i] >= '0' && str[i] <= '9')
    {
    count[str[i]-'0']++;
    }
}
for (int i = 0; i < 10; ++i) {
    printf("%d",count[i]);
}
return 0;
}
