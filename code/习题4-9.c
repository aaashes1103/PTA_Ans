#include<stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++){
        for(int j=i;j<=n/2;j++){
            printf("  ");
        }
        for(int k=0;k<2*i-1;k++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        printf("* ");
    }
    printf("\n");
    for(int i=n/2;i>0;i--){
        for(int j=i;j<=n/2;j++){
            printf("  ");
        }
        for(int k=0;k<2*i-1;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}