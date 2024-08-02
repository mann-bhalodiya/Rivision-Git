#include<stdio.h>

int main()
{
	int a[5],b[5],c[5],n,i;
	
	printf("\n enter n=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n enter b[%d]",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n enter c[%d]",i);
		scanf("%d",&c[i]);
	}
	
	for(i=0;i<n;i++)
	{
		i[c]=i[a]+i[b];
		
		printf("\n c[%d]=%d",i,c[i]);
	}
	
}
