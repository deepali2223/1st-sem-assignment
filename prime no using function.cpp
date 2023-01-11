#include<stdio.h>
void prime( int n)
{    
    int c=0;
	for(int i=2; i <n-1;i++)
	if (n %i==0)
    c++;
    if (c==0)
    printf("prime");
    else
    printf("not prime");
}
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
    prime(a);
return 0;

}
