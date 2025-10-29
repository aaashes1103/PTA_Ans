#include<stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    double term=1,sum=1;
    for(double i=1;i<=n;i++){
        term/=i;
        sum+=term;
    }
    printf("%.8f",sum);
    return 0;
}