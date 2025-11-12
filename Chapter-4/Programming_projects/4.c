/* A program that reads integer and converts it into octal (base 8)*/

#include <stdio.h>

int main(void){

	int number, i10_000, i1000, i100, i10, i1;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &number);
	i1 = number % 8;
	number = number / 8;
	i10 = number % 8;
	number = number / 8;
	i100 = number % 8;
	number = number / 8;
	i1000 = number % 8;
	number = number / 8;
	i10_000 = number % 8;
 	printf("In octal, your number is: %1d%1d%1d%1d%1d\n", i10_000
			, i1000, i100, i10, i1);



	return 0;
}
