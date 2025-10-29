#include<stdio.h>

int main(){
    int n=0,sum=0;
    for(int i=0;i<4;i++){
        scanf("%d",&n);
        sum+=n;
    }
    printf("Sum = %d; Average = %.1f",sum,sum/4.0);
    return 0;
}