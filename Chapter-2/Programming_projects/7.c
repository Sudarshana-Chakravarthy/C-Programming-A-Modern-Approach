/* A program that shows how to pay the amount using the smallest
 * number of $20, $10 ,$5 ,$1*/

#include <stdio.h>

int main(void){
	
	int twentys, tens, fiver, ones, amount;
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);
	twentys = amount / 20;
	amount = amount - (twentys * 20);
	tens = amount / 10;
	amount = amount - (tens * 10);
	fiver = amount / 5;
	amount = amount - (fiver * 5);
	ones = amount / 1;
	printf("$20 bills: %d\n", twentys);
	printf("$10 bills: %d\n", tens);
	printf(" $5 bills: %d\n", fiver);
	printf(" $1 bills: %d\n", ones);

	return 0;
}
