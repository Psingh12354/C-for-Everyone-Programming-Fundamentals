#include<stdio.h>
int main()
{
	int speed;
	printf("\n Enter the spped in integer.\n");
	scanf("%d",&speed);
	speed=(speed<=65)?(65):(speed<=70)?(70):(90);
	switch(speed)
	{
		case 65: printf("\n No speeding ticket.\n\n"); break;
		case 70: printf("\n Speeding ticket.\n\n");break ;
		case 90: printf("\n Expensive speeding ticket.\n\n");break;
		default: printf("\n Incorect speed.\n\n");break;
	}
	return 0;
}
