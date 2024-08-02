#include<stdio.h>
int sum(int n)
{
	int sum,i;
	for(i=0;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
}
int main()
{
	int n,add;
	printf("\nEnter number: ");
	scanf("%d",&n);
	add=sum(n);
	printf("sum=%d",add);
}
