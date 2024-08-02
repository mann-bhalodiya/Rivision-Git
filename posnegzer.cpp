#include<stdio.h>

int main()
{
	int a[10],i,n,pos,neg,zer;
	
	printf("\n enter n=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
			pos++;
		else if(a[i]==0)
			zer++;
		else
			neg++;
		
	}
	printf("\n Positive=%d \n negative=%d \n zero=%d",pos,neg,zer);
}
