#include <stdio.h>

int f(int *p)
{ 
	printf("a = %d\n", p); // a = 10?
}

int main()
{ 
	int a = 10;
	f((int *) a);
}
