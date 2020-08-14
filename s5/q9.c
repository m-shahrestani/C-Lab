#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main() {
	long long int n,pass,a,b;
	scanf("%d",&n);
	b=pow(10,n);
	time_t t=time(NULL);
	srand(t);
	a=rand();
	pass=(a*a)%b;
	printf("%0*d",n,pass);
	
	return 0;
}

