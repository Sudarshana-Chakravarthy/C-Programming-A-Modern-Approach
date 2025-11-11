/* A program to compute the volume of a sphere*/

#include <stdio.h>
#define PI 3.14

int main(void){

	int radius = 10;
	int volume;

	volume = (4.0f/3.0f) * PI * radius * radius * radius;
	printf("Volume: %d\n", volume);

	return 0;

}
