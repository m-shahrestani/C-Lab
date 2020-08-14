#include <stdio.h>
#include <math.h>

void zesht(int x)
{
	int m=x;
	while(m%2==0||m%5==0||m%3==0)
	{
		if(m%2==0)
			m/=2;
		if(m%3==0)
			m/=3;
		if(m%5==0)
			m/=5;	
	}
	if(m==1)
	{
		printf("%d\n",x);
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		zesht(i);
	}
	return 0;
}
