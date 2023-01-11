#include<stdio.h>
int main()
{
	int n,element,c=0;
	printf("enter the number of array");
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i <n; i ++)
	{
	printf("enter the element");
	scanf("%d",& a[i]);
}
	printf("enter the element to be found");
	scanf("%d",&element);
for(int i = 0 ; i < n ; i ++)
  {
  	if (a[i]== element )
  	  {
		  printf("the position of the element %d is %d", element ,i+1);
  	   c++;
  }
}
  if (c==0)
  printf("the element not found");
 return 0;
}
