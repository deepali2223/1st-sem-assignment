#include<stdio.h>
int main()
{
  int st,stop,sum=0;
  printf("enter the starting no");
  scanf("%d",&st);
  printf("enter the end point");
  scanf("%d",&stop);
  while(st<stop)
  {if (st%2==0)
  sum= sum + st;
  st ++;
  }
   printf("the sum of all even no is%d",sum); 
	return 0;
}