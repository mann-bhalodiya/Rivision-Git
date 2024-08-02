#include<stdio.h>
int max(int a,int b,int c);
int main()
{
	int a,b,c,ans;
	printf("\n enter a=");
	scanf("%d",&a);
	printf("\n enter b=");
	scanf("%d",&b);
	printf("\n enter c=");
	scanf("%d",&c);
	
	ans=max(a,b,c);	
}
int max(int a,int b,int c)
{
	int maax=a;
	
	if(b>maax)
		maax=b;
	if(c>maax)
		maax=c;

	printf("\n Maximum=%d",maax);
	
}
