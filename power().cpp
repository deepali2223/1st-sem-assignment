#include<stdio.h>
void power(int n,int e)
{    
    int p=1;
	for(int i=1; i <=e; i ++)
	p= p*n;
	printf("%d",p);
}
int main()
{
	int a,num;
	printf("enter a number");
	scanf("%d",&a);
	int powr;
	printf("enter the power");
	scanf("%d",&powr);
	power(a,powr);
return 0;
}