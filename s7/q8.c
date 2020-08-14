#include <stdio.h>

int n,a,b=-1;

void f(int x)
{
	int y=1;
	while(x>0)
	{
		y*=10;
		y+=x%10;
		x/=10;
	}
	while(y>1)
	{
		a++;
		if(a==n)
		{
			b=y%10;
			break;
		}
		y/=10;
	}
}

int main()
{
	int i,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f(i);
		if(b!=-1)
			break;
	}
	printf("%d",b);
	return 0;
}
