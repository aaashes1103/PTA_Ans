#include<stdio.h>
int ret(int i) {
    int j;
    int y = 1;
    
    for (j = 1; j <= i; j++) {
        y *= j;
    }
    return y;
}

int main() {
    int i,N,a;
    int sum = 0;
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        a = ret(i);
        sum += a;
    }
    printf("%d", sum);
    return 0;
}
   