#include<stdio.h>
int main()
{
	int repeat=0;
	printf("How string is your love 1-10? : \n");
	scanf("%d",&repeat);
	printf("\nI love you very");
	while(repeat>0)
	{
		printf("\n very");
		repeat--;
	};
	printf(" much.\n\n");
	return 0;
}
