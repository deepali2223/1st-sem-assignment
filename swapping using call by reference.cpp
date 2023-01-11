#include<stdio.h>
void swap(int *a,int *b)
{
	int c;
	c= * a;
	*a = *b;
	*b = c;
	
}
int main()
{
	int p , q;
	printf("enter the numbers");
	scanf("%d %d",&p, &q);
	printf("values before swapping a=%d,b= %d \n",p,q);
	swap(&p, &q);
	printf("values after swapping a=%d , b= %d",p, q);
	return 0;
}

