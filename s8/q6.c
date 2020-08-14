#include <stdio.h>

int f(int n,int b,int a[])
{
	int i,j,c=0,max=0;
	for(i=0;i<n;i++)
	{
		c=1;
		for(j=i;j<n;j++)
		{
			if(a[j]<=b*a[j+1])
				c++;
			else
				break;
		}
		if(c>max)
		{
			max=c;
		}
	}
	return max;
}
int main()
{
	int i,n,b;
	scanf("%d%d",&n,&b);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",f(n,b,a));

	return 0;
}
