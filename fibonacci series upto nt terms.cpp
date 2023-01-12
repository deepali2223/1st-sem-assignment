#include<stdio.h>
int main()
{
	int n,a=0,b=1,c;
	printf("enter the number");
	scanf("%d",&n);
	 for(int i = 1; i <= n+2 ; i ++)
	{
	  printf("%d\n ",a);
	 c = a+b;
	 a=b;
	 b= c;
	 }
	 return 0;
}