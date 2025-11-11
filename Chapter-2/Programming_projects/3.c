/* A program to compute volume of a sphere by asking
 * the user for the radius of the sphere*/

#include <stdio.h>
#define PI 3.14

int main (void){

	int radius,volume;
	
	printf("Enter the radius of the sphere: ");
	scanf("%d", &radius);
	volume = (4.0f/3.0f) * PI * radius * radius * radius;
	printf("Volume: %d\n", volume);
	
	return 0;

}

