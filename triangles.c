//https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem
//takes sides of n triangles as input and sorts them according to area
#include<stdio.h>
#include<math.h>
struct triangle
{
	int a;
	int b;
	int c;
};
typedef struct triangle triangle;
//a+b+c(a+b+c-2a)(a+b+c-2b)(a+b+c-2c) squaring and multiplying heron's equation by 2
int calc(int a,int b,int c)
{
  int area;
  area=(a+b+c)*(b+c-a)*(a+c-b)*(a+b-c);
  return area;
}
void sort_by_area(triangle* tr, int n)
{
int size=n;
int area[size],i;
for(i=0;i<n;i++)
{
  area[i]=calc(tr[i].a,tr[i].b,tr[i].c);
  // printf("%d  %d  %d", tr[i].a, tr[i].b, tr[i].c);
  // printf("%d",area[i]);
}
for(i=0;i<n;i++)
{
for(int j=0;j<n-i-1;j++)
{
  if(area[j]>area[j+1])
  {
    int temp=area[j];
    area[j]=area[j+1];
    area[j+1]=temp;
    temp=tr[j].a;
    tr[j].a=tr[j+1].a;
    tr[j+1].a=temp;
    temp=tr[j].b;
    tr[j].b=tr[j+1].b;
    tr[j+1].b=temp;
    temp=tr[j].c;
    tr[j].c=tr[j+1].c;
    tr[j+1].c=temp;
  }
}
}
}
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
