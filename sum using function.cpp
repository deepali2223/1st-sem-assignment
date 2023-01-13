#include<stdio.h>
int sum (int a, int b);
int main()
{   int c;
	int x;
	printf("enter 1st no");
	scanf("%d",&x);
	int y;
	printf("enter 2nd no");
	scanf("%d",&y);
	c = sum(x,y);
	printf("the sum = %d", c);
	return 0;
}
int sum(int a,int b)
{
	return  a+b;
}
