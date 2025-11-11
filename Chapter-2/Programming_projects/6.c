/* A program to evaluate a polynomial using horners rule */

#include <stdio.h>

int main(void){

	int x,polynomial;
	printf("Enter the value of x to calculate polynomial: ");
	scanf("%d", &x);
	polynomial = (((( 3 * x + 2)* x - 5)* x - 1) * x + 7) * x - 6;
	printf("The value of the polynomial: %d\n", polynomial); 

	return 0;
}
