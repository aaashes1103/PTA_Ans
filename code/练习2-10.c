#include <stdio.h>

int main(void) {
	double x = 0;
	scanf("%lf", &x);

	if (x != 0) {
		printf("f(%.1f)=%.1f\n", x, 1/x);
	}
	else{
		printf("f(%.1f)=%.1f\n", x,x);
	}
	return 0;
}
