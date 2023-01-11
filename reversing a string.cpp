#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
    printf("enter the string");
    scanf("%s",s);
	char t;
    int length = strlen(s) -1;
	for (int i =0; i<strlen(s)/2;i++)
	{
	t = s[i];
	s[i]= s[length];
	s[length--]= t;
	}
	printf("Reverse string : %s",s);
return 0;
}

