#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,r=0;
	scanf("%d", &n);
	do{
		r+=n%10;
		n/=10;
	}while(r>10);
	printf("%d",r);
	return 0;
}
