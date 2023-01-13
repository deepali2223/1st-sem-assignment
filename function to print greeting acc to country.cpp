#include<stdio.h>
void namaste();
void konichiwa();
int main()
{
	printf("enter j for japanese and  i for indian");
	int ch;
	scanf("%d",&ch);
	if (ch == 'i')
	{
		namaste();
	}
	else
	{
		konichiwa();
	}
	return 0;
}
void namaste()
{
	printf("Namaste");
}
void konichiwa()
{
	printf("konichiwa");
}
