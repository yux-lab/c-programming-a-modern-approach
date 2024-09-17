#include<stdio.h>

int main(void){
	float x;
	printf("Enter a number: ");
	scanf("%f",&x);
	
	float sum = ((((3 * x + 2) * x - 5) * x - 1)* x + 7) * x - 6; 

	printf("%.2f\n", sum);

	return 0;
}
