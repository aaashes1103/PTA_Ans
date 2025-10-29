#include<stdio.h>

int main(){
    int e=0;
    double cost=0;
    scanf("%d",&e);
    if(e<0){
        printf("Invalid Value!");
    }else if(e<=50){
        cost=e*0.53;
        printf("cost = %.2f",cost);
    }else{
        cost=50*0.53+(e-50)*0.58;
        printf("cost = %.2f",cost);
    }
    return 0;
}