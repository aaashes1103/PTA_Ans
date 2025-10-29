#include<stdio.h>

void trans(int n);

int main(){
    int score=0;
    scanf("%d",&score);
    trans(score);
    return 0;
}

void trans(int n){
    if(n>=90) printf("A");
    else if(n>=80) printf("B");
    else if(n>=70) printf("C");
    else if(n>=60) printf("D");
    else printf("E");
}