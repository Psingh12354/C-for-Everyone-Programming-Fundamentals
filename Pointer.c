#include<stdio.h>
int main()
{
	float a[5],sum=0.0,avg;
	int i;
	float *px,*psum,*pavg;
	px=&a[0];
	psum=&sum,pavg=&avg;
	printf("Enter the array elements : ");
	for(i=0;i<5;i++)
	{
		scanf("%f",(px+i));
		*psum+=*(px+1);
	}
	*pavg=*psum/5;
	printf("Sum = %.2f \t Average = %.2f\n",*psum,*pavg);
	return 0;
}
