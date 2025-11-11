/* Calculating the value of the polynomial, given x as input by the user*/

#include <stdio.h>
#define X5 (x*x*x*x*x)
#define X4 (x*x*x*x)
#define X3 (x*x*x)
#define X2 (x*x)

int main(void){

	int x,polynomial;
	
	printf("Enter the value of x to calculate polynomial: ");
	scanf("%d", &x);
	polynomial = (3 * X5) + (2 * X4) - (5 * X3) - X2 + (7 * x) - 6;
	printf("Value of the Polynomial: %d\n", polynomial);

	return 0;
}
