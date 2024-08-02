#include<stdio.h>

int main()
{
	int a[10],i,n,sum=0;
	
	printf("\n enter n=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	
	printf("\n Sum=%d",sum);
	
}
