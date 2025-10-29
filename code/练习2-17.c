#include<stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    int t=1;
    printf("pow(3,%d) = %d\n",0,t);
    for(int i=1;i<=n;i++){
        t*=3;
        printf("pow(3,%d) = %d\n",i,t);
    }
    return 0;
}