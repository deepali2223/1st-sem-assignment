#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of array");
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i <n; i ++)
	{
	
	printf("enter the element");
	scanf("%d",& a[i]);
}	int max= a[0];
	int min= a[0];
	for(int i=0; i<n;i++)
	{if (max < a [i])
	     max = a[i];}
	 for(int i=0; i<n;i++)
	 {
	 
     if ( min > a [i]);
         min = a [i];
	}
	printf("max= %d, min= %d", max , min);
	return 0;
	}
