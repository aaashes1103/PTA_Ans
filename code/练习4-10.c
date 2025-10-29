#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int min, num;
    scanf("%d", &min);

    for (int i = 1; i < n; ++i){
        scanf("%d", &num);
        if (num < min) {
            min = num;
        }
    }

    printf("min = %d\n", min);

    return 0;
}