#include<stdio.h>
int main()
{
int a;
printf("enter");
scanf("%d",&a);
if (a% 4 != 0)
printf("not a leap year");
else if (a %100 != 0)
printf("not a leap year");
else if (a% 400 != 0)
printf("not a year");
else 
printf(" leap year");
return 0;
}