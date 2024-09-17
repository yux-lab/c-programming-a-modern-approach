#include <stdio.h>

int main(void)
{
	int number;
	printf("Enter a three-digit number: ");
	scanf("%d", &number);
	
	printf("%d%d%d\n", number % 10, number / 10 % 10, number / 100);
	
     	printf("%d\n", number / 100);
	printf("%d\n", number / 10 % 10);
	printf("%d\n", number % 10);	
   return 0;
}
