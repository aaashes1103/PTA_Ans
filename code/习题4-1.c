#include<stdio.h>

int main(){
    int num=0,sum=0;
    while(1){
        scanf("%d",&num);
        if(num<=0) break;
        else if(num%2==1) sum+=num;
    }
    printf("%d",sum);
    return 0;
}