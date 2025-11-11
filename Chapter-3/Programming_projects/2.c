/* A program that formats product information entered by the user. */ 

#include <stdio.h>

int main(void){

	int item_number, days, month, year;
	float unit_price;

	printf("Enter item number: ");
	scanf("%d", &item_number);
	printf("Enter unit price: ");
	scanf("%f", &unit_price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &days, &year);
	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
	printf("%-d\t\t$%7.2f\t%.2d/%.2d/%d\n", item_number, unit_price, month, days,year);




	return 0;
}
