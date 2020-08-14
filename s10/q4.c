#include <stdio.h>

long long int memory[1000];

long long int f2(int n) 
{ 
	if (n==1||n==2||n==0) 
	{ 
		return 1;
	} 
	if (memory[n]==0) 
	{ 
		memory[n]=f2(n-1)+f2(n-2)+2*f2(n-3);
	}
	return memory[n];
}

int f(int n)
{
	if(n==0||n==1||n==2)
		return 1;
	else
		return f(n-1)+f(n-2)+2*f(n-3);
}
int main()
{
	int n,b;
	scanf("%d%d",&n,&b);
	if(b==1)
	{
		printf("%d",f(n));
	}
	if(b==2)
	{
		printf("%lld",f2(n));
	}
	return 0;
}

