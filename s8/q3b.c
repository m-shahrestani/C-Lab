#include <stdio.h>
#include <math.h>

int f(void)
{
	int static c=0;
	c++;
	return c;
}
int main()
{
	int m,n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		m=f();
	}
	if(m%2==0)
	printf("0");
	else
	printf("1");	
	return 0;
}
