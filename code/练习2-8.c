#include <stdio.h>

int main(void) {
	int F;
	printf("请输入一个华氏度\n"); 
	scanf_s("%d", &F);

	printf("Celsius = %d\n", 5 * (F - 32) / 9);
	return 0;
}