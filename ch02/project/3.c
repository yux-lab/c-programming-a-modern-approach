#include<stdio.h>
#define PI 3.14

int main(void){
	float radius;

	printf("Enter radius:");
	scanf("%f", &radius);
	
	float volume = PI * radius * radius * radius * (4.0f / 3.0f);
	printf("volume: %.2f\n",volume);

	return 0;
}
