#include<stdio.h>
#include<string.h>

int main()
{
	char s[10];
	printf("\n Enter string:");
	gets(s);

	printf("\n Reverse string:%s",strrev(s));
	return 0;
}
