#include<stdio.h>
int main()
{
int a ;
printf("enter a number");
scanf("%d",&a);

switch(a>0)
{
case 1: 
printf("posiitive");
break;
case 0:
	switch(a <0)
	{
		case 1: printf("negative");
		break;
		case 0:printf("zero");
		break;
	}break;
}
return 0;
}