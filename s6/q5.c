#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int n;
	scanf("%d",&n);
	if(n>3999)
		return -1;
    int a[13]={1,4,5,9,10,40,50,90,100,400,500,900,1000};  
    int i=12;     
    while(n>0) 
    { 
      int r=n/a[i]; 
      n=n%a[i]; 
      while(r--) 
      { 
      	switch(i)
		{
			case 0:
				printf("I");
				break;
			case 1:
				printf("IV");
				break;
			case 2:
				printf("V");
				break;
			case 3:
				printf("IX");
				break;
			case 4:
				printf("X");
				break;
			case 5:
				printf("XL");
				break;
			case 6:
				printf("L");
				break;
			case 7:
				printf("XC");
				break;
			case 8:
				printf("C");
				break;
			case 9:
				printf("CD");
				break;				
			case 10:
				printf("D");
				break;
			case 11:
				printf("CM");
				break;
			case 12:
				printf("M");
				break;
		} 
      } 
      i--; 
    }
	return 0; 
} 
