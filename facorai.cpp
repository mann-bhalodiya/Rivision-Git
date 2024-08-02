#include<stdio.h>
int fact(int n);
int main()
{
	int n,f;
	printf("\n entr n=");
	scanf("%d",&n);
	
	f=fact(n);
	printf("\n factorial=%d",f);
}
int fact(int n)
{
	int f=1;
	if(n==1)
		return(f);
	f=n*fact(n-1);
	return(f);
}
