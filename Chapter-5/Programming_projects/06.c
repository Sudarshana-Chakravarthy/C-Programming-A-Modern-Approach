/* */

#include <stdio.h>

int main(void){

	int d,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,first_sum,second_sum
		,total,check_digit,calculated_checkdigit;

	printf("Enter UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
		&d,&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&check_digit);
	first_sum = d+i2+i4+i6+i8+i10;
	second_sum = i1+i3+i5+i7+i9;
	total = 3 * first_sum + second_sum;
       	calculated_checkdigit = 9 - ((total - 1)% 10);

	if (calculated_checkdigit == check_digit)
		printf("VALID\n");
	else
		printf("NOT VALID\n");
		



	return 0;
}
