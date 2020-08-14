#include <stdio.h>
#include <math.h>
int c;
void f(void)
{
	c++;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f();
	}	
	if(c%2==0)
	printf("0");
	else
	printf("1");
	return 0;
}
