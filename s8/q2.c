#include <stdio.h>
#include <math.h>

double f(double x)
{
	return x*x+3*x+2;
}
double fprime(double x)
{
	return 3+2*x;
}

int main()
{
	int i;
	double a[200];
	a[0]=0;
	for(i=1;i<200;i++)
	{
		a[i]=a[i-1]-(f(a[i-1])/(fprime(a[i-1])));
		if(f(a[i])==0)
			printf("%lf\n",a[i]);	
	}	
	return 0;
}
