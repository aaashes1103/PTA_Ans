#include<stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    double num=2,den=1,sum=0,num0=0;
    for(double i=2;i<=n;i++){
        sum+=num/den;
        num0=num;
        num=num+den;
        den=num0;
    }
    sum+=num/den;
    printf("%.2f",sum);
    return 0;
}