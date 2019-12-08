#include <stdio.h>

long long int memory[1000];

long long int fib3(int n) 
{ 
	if (n==1||n==2) 
	{ 
		return 1;
	} 
	if (memory[n]==0) 
	{ 
		memory[n]=fib3(n - 1)+fib3(n - 2);
	}
	return memory[n];
}
long long fib(int n)
{
	long long int a=1,b=1,r,i;
	for(i=2;i<n;i++)
	{
        r=a+b;
        a=b;
        b=r;
	}
	if(n==1||n==2)
		return 1;
	else
		return r;
}

int fibonacci(int n)
{	if (n == 1 || n == 2)
	{	
		return 1;
	} 
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
	int n,b;
	scanf("%d%d",&n,&b);
	if(b==1)
	{
		printf("%d",fibonacci(n));
	}
	if(b==2)
	{
		printf("%lld",fib(n));
	}
	if(b==3)
	{
		printf("%lld",fib3(n));
	}
	return 0;
}
