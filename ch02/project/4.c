#include<stdio.h>

int main(void){
	float amount;

	printf("Enter an amount: ");
	scanf("%f", &amount);
	
	float tax = 0.05;
	printf("With tax added: $%.2f\n",amount + (amount * tax));

	return 0;
}
