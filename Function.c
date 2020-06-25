#include<stdio.h>
void func(int count)
{
	while(count>0)
	{
		printf("\n very");
		count--;
	};
	printf(" much.\n\n");
}
int main(void)
{
	int repeat=0;
	printf("How strong is your love 1-10? : ");
	scanf("%d",&repeat);
	printf("\nI love you very");
	func(repeat);
	return 0;
}
