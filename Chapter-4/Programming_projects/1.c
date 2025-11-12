/* A program to reverse a two digit number. */ 

#include <stdio.h>

int main(void){

	int tens,number, rev_number;
	printf("Enter a two-digit number: ");
	scanf("%d", &number);
	tens = (number % 10) * 10;
	rev_number = tens + (number / 10);
	printf("The reversal is: %d\n",rev_number);


	return 0;
}
