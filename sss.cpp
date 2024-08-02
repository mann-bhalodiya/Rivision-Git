#include<stdio.h>

int main()
{
	int a[10],i,n,j,tem;
	
	printf("\n enter n=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				tem=a[i];
				a[i]=a[j];
				a[j]=tem;
			}
		}
		printf("\n after sorting:");
		for(i=0;i<n;i++)
		{
			printf("\n a[%d]=%d",i,a[i]);
		}
	}
}
