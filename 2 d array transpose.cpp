#include<stdio.h>
int main ()
{ int i, j;
	int a[3][3];
	printf("enter array elemts");
	for (int i = 0 ; i < 3; i ++)
	{
		for(int j = 0; j < 3; j ++);
		scanf("%d",& a[i][j]);
	
	}
	int b[3][3];
	
	for(int i = 0; i < 3; i ++)
	{
		for (int j = 0; j < 3 ; j ++)
		
		b[j][i] = a[i][j];
}
 	for(int i = 0; i < 3; i ++)
	{
		for (int j = 0; j < 3 ; j ++)
		printf("%d \t", b [i][j]);
		printf("\n");
		
	}
	
	
	return 0; 
}