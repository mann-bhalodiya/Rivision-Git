//two dimestional array

#include<stdio.h>

int main()
{
	int a[2][3],i,j;
	
	printf("\n enter array size of 2*3\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("\n entered array size of 2*3\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
