#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	struct film{
		int sal;
		char esm[200];	
	};
	int n,i;
	scanf("%d%c",&n);
	struct film a[n];
	for(i=0;i<n;i++)
	{
		printf("esm film %dth \n",i+1);
		scanf("%s",&a[i].esm);
		printf("sal sakht film %dth \n",i+1);
		scanf("%d",&a[i].sal);
	}
	for(i=0;i<n;i++)
	{
		printf("%d%s",a[i].sal,a[i].esm);
		printf("\n");
	}	
	return 0;
}
