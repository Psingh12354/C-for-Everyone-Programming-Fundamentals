#include<stdio.h>
int main()
{
	int outside,weather;
	printf("\n Enter if outside 1 True  0 False : ");
	scanf("%d",&outside);
	printf("\n Enter if weather 1 True 0 False : ");
	scanf("%d",&weather);
	if(outside && weather)
	{	
		printf("\nPlease take your umbrela.\n");
	}
	else
	{
		printf("\nWear normal uniform.\n");
	}
	return 0;
	
}
