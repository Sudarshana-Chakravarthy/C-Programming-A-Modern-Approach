/* */

#include <stdio.h>

int main(void){

	int number, tens, hundreds, rev_number;
	printf("Enter a two-digit number: ");
	scanf("%d", &number);	
	hundreds = number % 10;
	tens = (number / 10) % 10;
	rev_number = (hundreds * 100) + (tens * 10) + (number / 100);
	printf("The reversal is: %.3d\n", rev_number);



	return 0;
}
