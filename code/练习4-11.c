#include <stdio.h>

int main() {
	int m, n;
	int i,x;
	int sum = 0;
	int count = 0;

	scanf("%d %d", &m, &n);

	for (x = m; x <= n; x++) {
        if (x < 2) {
            continue;
        }

		int isprime = 1;
		for (i = 2; i < x; i++) {
			
			if (x % i == 0)
			{
				isprime = 0;
				break;
			}
		}
        
        if (isprime == 1) {
			count++;
			sum += x;
		}
		
	}
    printf("%d %d", count, sum);
	return 0;
}