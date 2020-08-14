#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	
int main() {
	const double PI=3.14159265359;
	double r,p,s;
	scanf("%lf",&r);
	s=PI*pow(r,2);
	p=PI*r*2;
	printf("%lf\n%lf",p,s);
	return 0;
}
