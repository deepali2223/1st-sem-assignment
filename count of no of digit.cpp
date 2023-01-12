#include<stdio.h>
int main()
{
	int num,c;
	printf("enter a number");
	scanf("%d",&num);
	while(num !=0)
	{
	num = num/10;
	c++;
	}
	printf("the number of digits in a number is %d",c);
}