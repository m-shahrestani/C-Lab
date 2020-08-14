#include <stdio.h>
#include <math.h>
int jaygasht(int a,int b)
{
	int i,m=1,n=1;
	for(i=1;i<=a;i++)
	{
		m*=i;
	}
	for(i=1;i<=(a-b);i++)
	{
		n*=i;
	}
	return m/n;
}
int main() {
	int n,i ,r=10;
	scanf("%d",&n);
	for(i=n;i>1;i--)
		r+=9*jaygasht(9,i-1);
	printf("%d",r);
	return 0;
}
