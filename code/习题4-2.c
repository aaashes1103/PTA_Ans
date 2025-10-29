#include<stdio.h>
#define eps 0.00001

int main(){
    double x=0;
    scanf("%lf",&x);
    double approx=1,term=1;
    double i=1;
    while(term>=eps){
        term=term*x/i;
        approx+=term;
        i++;
    }
    printf("%.4f",approx);
    return 0;
}