/* A program to calculate the remaining balance on a loan after the first,
 * second, third monthly payments.*/

#include <stdio.h>

int main(void){

	float loan_amount,monthly_payment,balance,
	      monthly_interest, annual_interest;
	
	printf("Enter amount of loan: ");
	scanf("%f", &loan_amount);
	printf("Enter interst rate: ");
	scanf("%f", &annual_interest);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	monthly_interest = (annual_interest / 12)/100;
	balance = loan_amount - monthly_payment + (loan_amount * monthly_interest);
	printf("Balance remaining after first payment: %.2f\n", balance);
	balance = balance + (balance * monthly_interest) - monthly_payment;
	printf("Balance remaining after second payment : %.2f\n", balance);
	balance = balance - monthly_payment + (balance * monthly_interest);
	printf("Balance remaining after third payment: %.2f\n",balance);


	return 0;
}
