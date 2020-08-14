#include <stdio.h>
#include <math.h>

int main() {
	int i,n,m=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
			m+=i;
	}
	if(m==n)
		printf("yes");
	else
		printf("no");
	return 0;
}
