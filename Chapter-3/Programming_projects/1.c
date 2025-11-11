/* A program which accepts date from the user in mm/dd/yyyy and displays it as yyyymmdd*/ 

#include <stdio.h>

int main(void){
	
	int days, month, year;
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &days, &year);
	printf("You entered the date %d%.2d%.2d\n",year,month,days);

	return 0;
}
