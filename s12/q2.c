#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void show()
{
	printf("1: New data\n");
	printf("2: Show data\n");
	printf("3: Exit\n");
}
int main() 
{
	int i=200,j=0,x=1;
	char **arr ;
	arr=(char **) malloc(sizeof(char*));
	char *str = (char *) malloc(200);
	printf("enter khatere %dth\n",j+1);
	gets(str);
	strcat(str, "\n");
	char *temp = (char *) malloc(200);	
	while(1)
	{
		gets(temp);
		strcat(temp, "\n");		
		if(temp[0] == ' ')
			break;
		i+=200;
		str=(char *)realloc(str, i);
		strcat(str,temp);
	}
	arr[j]=str;
	while(1)
	{
		int code=0;
		show();
		scanf("%d",&code);
		if(code==1)
		{
			j++;
			printf("enter khatere %dth\n",j+1);
			if(x==j+1)
			{
				x*=2;
				arr=(char **)realloc(arr,x*sizeof(char*));
			}
			char *str = (char *) malloc(200);
			gets(str);
			while(1)
			{	
				gets(temp);	
				if(temp[0] == ' ')
					break;
				strcat(temp, "\n");	
				i+=200;
				str=(char *)realloc(str, i);
				strcat(str,temp);
				arr[j]=str;
			}
		}
		if(code==2)
		{
			int t;
			printf("khatere chand?\n");
			scanf("%d",&t);
			if(t<=j+1)
			{
				puts(arr[t-1]);	
			}
			else
			{
				printf("khatere hanooz sakhte nashode!\n");				
			}
		}
		if(code==3)
		{
			exit(0);
		}
	}
	return 0;
}
