#include<stdio.h>
void even_odd(int num)
{
     if( num%2 == 0)
    printf("%d is even",num);
    else
    printf("%d is odd",num);
}
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    even_odd(a);
return 0;
}

