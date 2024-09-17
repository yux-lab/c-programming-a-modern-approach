#include<stdio.h>
#define PI 3.14

int main(void){
	float radius = 10.0f;//float类型更适合表示长度
	
	//float volume = (4.0f / 3.0f) * PI * radius * radius * radius;//先做除法再乘法可能会因为浮点运算的精度问题而导致轻微的误差
	
	float volume = PI * radius * radius * radius * (4.0f / 3.0f);
	//(4.0f / 3.0f)和(4 / 3)是不一样的结果；前者有小数，后者小数会被截断，为1。
	printf("volume: %.2f\n",volume);

	return 0;
}
