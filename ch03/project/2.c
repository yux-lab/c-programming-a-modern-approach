#include<stdio.h>

int main(void){
	int item, mm, dd, yyyy;
	float price;

	printf("Enter item number: ");
	scanf("%d", &item);

	printf("Enter unit price: ");
	scanf("%f", &price);

	printf("Enter purchase data (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd ,&yyyy);

	printf("\n\n\n");
	
	printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
	printf("%d\t$%6.2f\t%.2d/%.2d/%.4d\n", item, price, mm, dd, yyyy);


        return 0;
}
