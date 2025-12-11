/* */

#include <stdio.h>

int main(void){

	int num;

	printf("Enter numerical grade: ");
	scanf("%d",&num);
	num /= 10;

	switch (num){

		case 10: case 9: printf("Letter grade: A\n");
				  break;
		case 8: printf("Letter grade: B\n");
			break;
		case 7: printf("Letter grade: C\n");
			break;
		case 6: printf("Letter grade: D\n");
			break;
		case 5: case 4: case 3: case 2: case 1: case 0:
			printf("Letter grade: F\n");
			break;
		default: printf("Error\n");
	}



	return 0;
}
