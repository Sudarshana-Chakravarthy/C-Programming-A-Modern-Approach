/* A program that prompts the user to enter a telephone number in the form 
 * (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxxx */

#include <stdio.h>

int main(void){
	
	int area,prefix,line;
	printf("Enter phone number [(xxx) xxx-xxx]: ");
	scanf("(%d) %d-%d", &area, &prefix, &line);
	printf("You entered %.3d.%3d.%.4d\n", area, prefix, line);

	return 0;
}
