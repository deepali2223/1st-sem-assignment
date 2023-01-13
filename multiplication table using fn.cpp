#include<stdio.h>
void printTable (int a);
int main()
{  
	int x;
	printf("enter no");
	scanf("%d",&x);
	printTable(x);
	return 0;
}
void printTable (int a)
{
    for(int i =1;i <= 10; i++)
    printf("%d * %d = %d \n", a, i,a*i);
}
