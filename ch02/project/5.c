#include<stdio.h>

int main(void){
	float x;
	printf("Enter a number: ");
	scanf("%f",&x);
	float sum = (3.0f * x * x * x * x * x) + (2.0f * x * x * x * x) - (5.0f * x * x * x) - (x * x) + (7.0f * x) - 6.0f; 

	printf("%.2f\n", sum);

	return 0;
}
