/* A program to breakdown an ISBN enetered by the user. */

#include <stdio.h>

int main(void){

	int gs1, group_iden, publisher, item_no, check_digit;	
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1, &group_iden, &publisher, &item_no, &check_digit);
	printf("GS1 prefix: %d\n",gs1);
	printf("Group Identifier: %d\n", group_iden);
	printf("Publisher code: %d\n", publisher);
	printf("Item number: %d\n", item_no);
	printf("Check digit: %d\n",check_digit);

	return 0;
}
