#include<stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    double sum=0;
    for(double i=1;i<=n*2-1;i+=2){
        sum+=1.0/i;
    }
    printf("sum = %.6f",sum);
    return 0;
}