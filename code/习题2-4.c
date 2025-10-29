#include<stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    int flag=1;
    double sum=0;
    for(double i=0;i<n;i++){
        sum+=flag*(i+1)/(2*i+1);
        flag=-flag;
    }
    printf("%.3f",sum);
    return 0;
}