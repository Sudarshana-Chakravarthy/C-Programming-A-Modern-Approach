/* */

#include <stdio.h>

int main(void){

	int num,ones,tens;

	printf("Enter a two-digit number: ");
	scanf("%2d", &num);
	
	tens = num / 10;
	ones = num % 10;
	
	printf("You entered the number ");

	switch (tens){
	
		case 1: switch (ones) {

			case 0: printf("ten");
				break;
			case 1: printf("Eleven");
				break;
			case 2: printf("twelve");
				break;
			case 3: printf("Thirteen");
				break;
			case 4: printf("Fourteen");
				break;
			case 5: printf("Fifteen");
				break;
			case 6: printf("Sixteen");
				break;
			case 7: printf("Seventeen");
				break;
			case 8: printf("Eighteen");
				break;
			case 9: printf("Nineteen");
				break;
				
			}
			break;
		
		case 2: printf("twenty");
			break;
		case 3: printf("Thirthy");
			break;
		case 4: printf("Fourty");
			break;
		case 5: printf("Fifty");
			break;
		case 6: printf("Sixty");
			break;
		case 7: printf("Seventy");
			break;
		case 8: printf("Eighty");
			break;
		case 9: printf("Ninty");
			break;
	}
	if (ones != 0 & (num <11 | num > 19)){

	printf("-");

	switch (ones){
			
		case 1: printf("One");
			break;
		case 2: printf("Two");
			break;
		case 3: printf("Three");
			break;
		case 4: printf("Four");
			break;
		case 5: printf("Five");
			break;
		case 6: printf("Six");
			break;
		case 7: printf("Seven");
			break;
		case 8: printf("Eight");
			break;
		case 9: printf("Nine");
			break;

		}
		
	
		
		}


	printf(".\n");
	return 0;
}
