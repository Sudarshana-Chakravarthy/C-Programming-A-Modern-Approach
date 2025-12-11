/* */

#include <stdio.h>

int main(void){

	float commission, value, shares, price_pershare, rival_commission;

	printf("Enter no of Shares: ");
	scanf("%f", &shares);
	printf("Enter price per share: ");
	scanf("%f", &price_pershare);
	value = shares * price_pershare;

	if (value < 2500.00f)
		commission = 30.0f + 0.17f * value;
	else if (value < 6250.00f)
		commission = 56.00f + 0.0066f * value;
	else if (value < 20000.00f)
		commission = 76.00f + 0.0034f * value;
	else if (value < 50000.00f)
		commission = 100.00f + 0.0022f * value;
	else if (value < 500000.00f)
		commission = 155.00f + 0.0011f * value;
	else 
		commission = 255.00f + 0.0009f * value;

	if (commission < 39.00f)
		commission = 39.00f;

	if (shares < 2000.00f)
		rival_commission = 33 + 0.03 * shares;
	else 
		rival_commission = 33 + 0.02 * shares;


	printf("Commission:\t\t $%.2f\nRival Commission:\t $%.2f\n",commission,rival_commission);



	return 0;
}
