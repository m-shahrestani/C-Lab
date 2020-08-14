#include <stdio.h>

int check (float side1, float side2, float angle)
{
	if(side1==side2&&angle!=90)
		printf("1");//loozi
	else if(side1!=side2&&angle==90)
		printf("2");//mostatil
	else if(side1==side2&&angle==90)
		printf("3");//moraba
	else
		printf("0");
			
}
int main()
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	check(a,b,c);
	return 0;
}
