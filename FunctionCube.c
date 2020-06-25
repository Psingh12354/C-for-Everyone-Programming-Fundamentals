#include<stdio.h>
int cube(int x)
{
	return x*x*x;
}
int main()
{	
	int a;
	int result;
	printf("\nEnter the number : ");
	scanf("%d",&a);
	printf("\nEnter number is : %d",a);
	 result=cube(a);
	printf("\nCube = %d",result);
	return 0;
}
