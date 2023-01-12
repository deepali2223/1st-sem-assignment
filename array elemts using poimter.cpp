#include<stdio.h>
int main()
{
	int a []= {1, 2 , 3 , 4 , 5};
printf("%u",a);
int *p;
p = a;
for (int i = 0; i <5; i++)
printf("%d", *(p+i));
return 0;
}
