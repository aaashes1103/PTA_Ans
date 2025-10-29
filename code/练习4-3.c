#include<stdio.h>

int main(){
    double sum=0,term=0,eps=0;
    scanf("%lf",&eps);
    int flag=1;
    double i=1;
    do{
        term=1/(3*i-2);
        sum+=flag*term;
        i++;
        flag=-flag;
    }while(term>eps);
    printf("sum = %f",sum);
    return 0;
}