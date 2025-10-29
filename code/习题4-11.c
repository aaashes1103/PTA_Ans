#include<stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    if(n==1){
        printf("%d",1);
        return 0;
    }
    int a=1,b=1,pair=1,month=2;
    while(pair<n){
        pair=a+b;
        a=b;
        b=pair;
        month++;
    }
    printf("%d",month);
    return 0;
}