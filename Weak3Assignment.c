/* 
    Author  :   Priyanshu Singh
    Program :   C program that has a function that prints a table of values for sine and cosine between (0, 1)
*/

#include<stdio.h>
#include<math.h> /* has  sin() and cos() */
int main(void)
{ 
    double interval;
    int i;
    printf("sine values :\t\t\t\t\tcosine values :\n");
    for(i = 0; i <100; i++)
    {
         interval = i/100.0;
         printf("sin( %lf ) = %lf \t\t\t", interval, sin(interval));    // Printing Sine values
         printf("cos( %lf ) = %lf \n", interval, cos(interval));        // Printing Cosine values
         
    }


    printf("\n\t\t\t\t+++++++\n");
    return 0;
}
