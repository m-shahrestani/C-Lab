#include <stdio.h>

int main()
{
	int n,k,i;
	scanf("%d%d",&n,&k);
	int D[n];
	D[0]=1;
	D[1]=1;
	for(i=2;i<=n;i++)
	{ 
		D[i]=D[i-1]*i;
	}
	printf("%d\n",D[n]/(D[n-k]*D[k]));
	return 0;
}
