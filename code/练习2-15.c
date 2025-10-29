#include<stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    double sum=0;
    int flag=1;
    for(double i=1;i<=n*3-2;i+=3){
        sum+=flag*1.0/i;
        flag=-flag;
    }
    printf("sum = %.3f",sum);
    return 0;
}