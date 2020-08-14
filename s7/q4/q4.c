#include<stdio.h>

int main()
{
    double k,m,n;
    scanf("%lf%lf",&m,&n);
    k = m/2;
    while(m!=rint(pow(k,n)))
	{	
        if(m<pow(k,n))
            k = k/2;
        if(m>pow(k,n))
            k = (3*k)/2;
    }
    printf("%lf",k);
    return 0;
}
