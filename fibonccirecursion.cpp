#include<stdio.h>
void fibo(int,int,int);
void fibo(int n,int n1,int n2)
{
	int n3;
	n3=n1+n2;
	printf("%d",n3);
	n--;
	if(n>0)
	{
		fibo(n2,n3,n);
	}
}
int main()
{
	int n1=0,n2=1,n;
	printf("\n enter n=");
	scanf("%d",&n);
	
	printf("\n %d %d",n1,n2);
	fibo(n1,n2,n-2);
}
