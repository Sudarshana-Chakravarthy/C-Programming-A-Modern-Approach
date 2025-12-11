/* */

#include <stdio.h>

int main(void){

	int no1, no2, no3, no4,largest,smallest;
	
	printf("Enter four integers: ");
	scanf("%d %d %d %d",&no1,&no2,&no3,&no4);
	
	largest = smallest = no1;
	
	if(no2 > largest) largest = no2;
	if (no2 < smallest) smallest = no2;
	if (no3 > largest) largest = no3;
	if (no3 < smallest) smallest = no3;

	largest = (no4 > largest) ? no4 : largest;
       	smallest = (no4 < smallest) ? no4 : smallest;
	
	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);	



	return 0;
}
