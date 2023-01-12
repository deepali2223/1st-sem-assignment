#include<stdio.h>
int main()
{ int n,sum=0,temp;
 printf("input a number");
 scanf("%d",&n);
 temp=n;
 while(n<0)
 {
 int r=n/10;
 int f=1;
 for(int i=1;i<=r;i++)
  {
  
  f= f*i;
  sum+= f;
  n=n/10;
}
 }
 if (sum==temp)
 printf("strong no");
 else
 printf("not a strong no");
 return 0;
 } 
 
