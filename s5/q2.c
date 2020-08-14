#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	double x1,x2,x3,x4,y1,y2,y3,y4,a,b,c,d;
	scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
	c=sqrt(pow((x3-x4),2)+pow((y3-y4),2));
	d=sqrt(pow((x4-x1),2)+pow((y4-y1),2));
	printf("%lf\n%lf\n%lf\n%lf",a,b,c,d);
	
	
	return 0;
}
