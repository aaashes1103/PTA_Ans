#include<stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    int term=0,ret=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&term);
            if(i==n-1 || j==n-1 || j==n-1-i) continue;
            ret+=term;
        }
    }
    printf("%d",ret);
    return 0;
}