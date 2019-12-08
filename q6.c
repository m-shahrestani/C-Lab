#include <stdio.h>
#include <string.h>

int main() 
{
	int i,n,m,j=0;
	char str1[1000],str2[1000];
	gets(str1);
	n=strlen(str1);
	for(i=0;i<n;i++)
	{
		if(!(isspace(str1[i])))
		{
			str2[j]=str1[i];
			j++;
		}
	}
	for(i=0;i<n;i++)
	{
		str2[i]=tolower(str2[i]);
	}
	m=strlen(str2);
	char str3[m];
	for(i=0;i<m;i++)
	{
		str3[i]=str2[m-i-1];
	}
	if(strcmp(str2,str3)==0)
	{
		printf("true\n");
	}
	else
		printf("false\n");		
	puts(str2);
	puts(str3);
	return 0;
}
