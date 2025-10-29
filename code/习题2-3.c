#include<stdio.h>

int main(){
    int m=0;
    int n=0;
    scanf("%d %d",&m,&n);
    double sum=0;
    for(int i=m;i<=n;i++){
        sum+=i*i+1.0/i;
    }
    printf("sum = %.6f",sum);
    return 0;
}