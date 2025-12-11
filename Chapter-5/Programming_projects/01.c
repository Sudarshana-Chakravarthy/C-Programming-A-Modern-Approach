/* A program that calculates how many digits a number contains */

#include <stdio.h>

int main(void){

	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);

	if (number < 10 && number >= 0)
	       printf("The number %d has 1 digits\n", number);
	else if (number >= 10 && number <100)
		printf("The number %d has 2 digits\n", number);
	else if (number >=100 && number < 1000)
		printf("The number %d has 3 digits\n", number);
	else
		printf("The number %d has 4 digits\n", number);


	return 0;
}
