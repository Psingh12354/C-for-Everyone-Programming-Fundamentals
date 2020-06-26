/* To make something globally available you need to declare after std
int a; This is a global variable
“extern” keyword is used to extend the visibility of function or variable. By default the functions are visible throughout the program, there is no need to declare or define extern functions. It just increase the redundancy. Variables with “extern” keyword are only declared not defined.
In the C programming language, static is used with global variables and functions to set their scope to the containing file. In local variables, static is used to store the variable in the statically allocated memory instead of the automatically allocated memory.
auto: This is the default storage class for all the variables declared inside a function or a block. Hence, the keyword auto is rarely used while writing programs in C language. Auto variables can be only accessed within the block/function they have been declared and not outside them (which defines their scope).

*/
#include<stdio.h>
extern int reps=0; // this act as a global variable
void f(void)
{
	static int called=0;
	printf("f called %d\n",called);
	called++;
	reps=reps+called;
}
int main(void)
{
	auto int i=1;
	const int Limit=10;
	for(;i<Limit;i++){
		printf("i local =%d, reps global = %d\n",i,reps);
		f();
}	
return 0;
}
