#include <stdio.h>
#include <math.h>

int main() {
	int i,n,r=0,m=0,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		r+=(i+1);
		m+=a;
	}
	printf("%d",r-m);
	return 0;
}
