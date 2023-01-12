#include<stdio.h>
int main()
{
	int a = 10;
	int *p , ** pt;
	p = &a;
	pt =  &p;
	printf(" %d, %d",*p, **pt);
	return 0;
}