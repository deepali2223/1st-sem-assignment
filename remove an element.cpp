#include<stdio.h>
int main()
{

int n;
printf("input no of elements");
scanf("%d",&n);
int a[n];
for(int i = 0; i < n ; i++)
scanf("%d", & a [i]);
int dval;
printf("input no to be removed");
scanf("%d",&dval);

for(int i = 0; i < n ; i ++)
{
	if(a [i]== dval)
	{
			
	for(int  j = i; j < n-1 ; j ++)
	  a [j] = a[ j +1 ];

	  break;
}
}
 for(int i = 0 ; i < n -1 ; i ++)
 printf("%d \n", a [ i]);
 
return 0 ; 
}
