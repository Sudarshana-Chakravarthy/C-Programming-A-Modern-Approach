/* */

#include <stdio.h>

int main(void){
	
	int hundreds, tens, ones;
	printf("Enter a three-Digit number: ");
	scanf("%1d%1d%1d", &hundreds, &tens, &ones);
	printf("The reversal is: %1d%1d%1d\n", ones, tens, hundreds);

	return 0;
}
