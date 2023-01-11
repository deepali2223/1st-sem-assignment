#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two number");
	scanf("%d, %d",&a,&b);
	int *p;
	p = & a;
	int *ptr;
	ptr = & b;
	int c = (*p +  *ptr) ;
	printf("the sum is %d",c);
	return 0;
}