#include <stdio.h>
#include <math.h>

int main() {
	int i,n,m=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			m++;
	}
	if(m==3)
		printf("chert aval");
	else
		printf("no");
	return 0;
}
