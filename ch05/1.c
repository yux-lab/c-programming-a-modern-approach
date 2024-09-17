#include<stdio.h>

int main(void){
	int number,digit;
	printf("Enter a number: ");
	scanf("%d", &number);

	if(number < 10){
		digit = 1;
	}else if(number < 100){
		digit = 2;
	}else{
		digit = 3;
	}

	printf("The number %d has %d digits\n", number, digit);
        return 0;
}
