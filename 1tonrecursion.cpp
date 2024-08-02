#include<stdio.h>

int sum(int);
int sum(int n)
{
	int ans=1;
	if(n==1)
		return ans;
	else
		ans=n+sum(n-1);
	
}
int main()
{
	int n,find;
	printf("\n enter n=");
	scanf("%d",&n);
	find=sum(n);
	
	printf("\n Sum=%d",find);
	return 0;
}
