#include <stdio.h>

double fact(int n) {
	double y = 1.0;
	int i;
	for (i = 1; i <= n; i++) {
		y *= i;

	}return y;

}
int main() {
	int n, m;
	scanf("%d %d", &m, &n);
	double a = fact(n);
	double b = fact(m);
	double c = fact(n - m);
	printf("result = %.0f", a / (b * c));
	return 0;
}