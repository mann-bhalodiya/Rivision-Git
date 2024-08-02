#include<stdio.h>
int find(int n);
int main()
{
	int n,ans;
	printf("\n enter n=");
	scanf("%d",&n);
	ans=find(n);
}
int find(int n)
{
	if(n%2==0)
	{
		printf("\n number is even");
	}
	else
	{
		printf("\n number is odd");
	}
	
}
