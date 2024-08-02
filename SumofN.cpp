#include<stdio.h>
int add(int n);
int main()
{
	int n,ans;
	printf("\n entr n=");
	scanf("%d",&n);
	
	ans=add(n);

	printf("\n Additon=%d",ans);
}
int add(int n)
{
	int i,sum;
	for(i=12
	;i<n;i++)
	{
		sum+=i;
	}
	return sum;
}