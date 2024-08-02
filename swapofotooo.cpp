#include<stdio.h>
int swap(int x,int y);
int main()
{
	int y,x;
	printf("\n enter x=");
	scanf("%d",&x);
	printf("\n enter y=");
	scanf("%d",&y);
	
	printf("\n X=%d && Y=%d",x,y);
	swap(x,y);
	
	
}
int swap(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	
	printf("\n After Swapping");
	printf("\n X=%d && Y=%d",x,y);
	
}
