/* A program to convert 24 hour time to 12 hour time */ 

#include <stdio.h>

int main(void){

	int minutes,hours;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);
	
	if (hours > 12 && hours < 24 )
		printf("Equivalent 12-hour time: %.2d:%.2d PM\n", hours - 12 , minutes);
	else if (hours == 24)
		printf("Euivalent 12-hour time: %.2d:%.2d AM\n", hours - 24, minutes);
	else if (hours == 12)
		printf("Equivalent 12-hour time: %.2d:%.2d PM\n", hours, minutes);
	else
		printf("Equivalent 12-hour time: %.2d::%.2d AM\n",hours,minutes);
	


	return 0;
}
