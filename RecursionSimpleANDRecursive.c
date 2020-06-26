#include<stdio.h>
long int SimpleFactorial(int n)
{
	long f=1;
	int i;
	for( i=1;i<=n;i++)
		f=f*i;
		return f;
}
long int RecursionFactorial(int n)
{
	if(n==1)
		return 1;
	else
		return(RecursionFactorial(n-1)*n);
	
}
int main(void)
{
	int x=0,i;
	printf("Factorial Table : ");
	scanf("%d",&x);
	printf("\n Factorial\n");
	for(i=1;i<=x;i++)
	printf("\n%d\t %ld\n",i,SimpleFactorial(i));
	printf("\n\n");
	for(i=1;i<=x;i++)
	printf("\n%d\t %ld\n",i,RecursionFactorial(i));
	printf("\n\n");
	return 0;
}











