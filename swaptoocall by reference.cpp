#include<stdio.h>
int swap();
swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	
	printf("\n After Swapping");
	printf("\n A=%d && B=%d",a,b);
}
int main()
{
	int *a,*b;
	printf("\n enter a=");
	scanf("%d",&a);
	printf("\n enter b=");
	scanf("%d",&b);
	printf("\n A=%d && B=%d",a,b);
	swap(int *a,int *b);
}

