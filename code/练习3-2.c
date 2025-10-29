#include<stdio.h>

int sign(int n);
int main(){
    int n;
    scanf("%d",&n);
    printf("sign(%d) = %d",n,sign(n));
    return 0;
}

int sign(int n){
    if(n==0){
        return 0;
    }else{
        return n<0? -1:1;
    }
}