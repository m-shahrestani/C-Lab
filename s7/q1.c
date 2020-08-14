#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d",&n);
	while(n%2==0||n%5==0||n%3==0)
	{
		if(n%2==0)
			n/=2;
		if(n%3==0)
			n/=3;
		if(n%5==0)
			n/=5;	
	}
	if(n==1)
		printf("true");
	else
		printf("false");
	return 0;
}
