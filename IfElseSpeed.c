#include<stdio.h>
int main()
{
	int speed;
	printf("\n Enter the speed in integer : \n");
	scanf("%d",&speed);
	if(speed<60)
	{
		printf("\nNo overspeeding ticket.\n");
	}
	else
	{
		printf("\nspeeding ticket.\n");
	}
	return 0;
}
