#include<stdio.h>

int main(void){
	int amount;
	
	printf("Enter a dollar amount: ");
	scanf("%d",&amount);
	
	int numberOf20 = amount / 20;
	printf("$20 bills: %d\n", numberOf20);

	int rest1 = amount - (numberOf20 * 20);
	int numberOf10 = rest1 / 10;
	printf("$10 bills: %d\n", numberOf10);

	int rest2 = rest1 - (numberOf10 * 10);
	int numberOf5 = rest2 / 5;
        printf(" $5 bills: %d\n", numberOf5);

	int rest3 = rest2 - (numberOf5 * 5);
        int numberOf1 = rest3 / 1;
        printf(" $1 bills: %d\n", numberOf1);

	return 0;
}
