#include<stdio.h>

int main()
{
	int a[10],i,n,max=0;
	
	printf("\n enter n=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
}
printf("\n Maximum=%d",max);
}
