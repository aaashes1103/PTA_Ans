#include<stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    double sum=0;
    for(int i=1;i<=n;i++){
        sum+=1.0/i;
    }
    printf("sum = %.6f",sum);
    return 0;
}