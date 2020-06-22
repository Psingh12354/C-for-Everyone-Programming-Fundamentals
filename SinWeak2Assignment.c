/*
June 22, 2020
Calculate sin(x) for given double input x
*/

#include <stdio.h>
#include <math.h> // here i include math library 

int main(void)
{
	double x; //input variable 
	printf("Enter value of x : ");
	scanf(" %lf", &x); // Here i take input value of x
	printf("sin(x) is : %lf \n\n", sin(x)); // here i calculate sin(x) through predefine function
	return 0;
}
