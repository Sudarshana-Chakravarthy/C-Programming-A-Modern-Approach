/* Program that displays the amount and its added tax.*/

#include <stdio.h>
#define TAX 0.05

int main(void){

	float amount,total_amount;

	printf("Enter an amount: ");
	scanf("%f", &amount);
	total_amount = amount + amount * TAX;
	printf("with tax added: %.2f\n", total_amount);
}

