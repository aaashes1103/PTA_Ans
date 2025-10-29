#include<stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    int total=1;
    for(int i=0;i<n-1;i++){
        total=(total+1)*2;
    }
    printf("%d",total);
    return 0;
}