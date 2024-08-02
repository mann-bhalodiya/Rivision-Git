#include<stdio.h>

int main()
{
	int a[10],i,n,x,index=-1;
	
	printf("\n enter n=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n enter a number you want to find=");
	scanf("%d",&x);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			index=1;
			break;
		}
	}
	if(index==-1)
	{
		printf("\n number is invalid");
	}
	else
	{
		printf("%d is a index %d",x,index);
	
	}
}
