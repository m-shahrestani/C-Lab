#include <stdio.h>
#include <math.h>

int main() {
	int i,n;
	double m=0;
	double r=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		r+=1/(pow(2,i));	
	}
	printf("%lf\n",r);
	i=0;
	for(i=n;i=0;i--)
	{
		m+=1/(pow(2,i));	
	}
	printf("%lf\n",m);
	if(m==r)
	printf("hh");

	return 0;
}
