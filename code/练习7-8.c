#include<stdio.h>
#define max 6

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int list[max][max]={{0,0,0},};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&list[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",list[(j+n*max-m)%n][i]);
            if(j==n-1) printf("\n");
        }
    }
    return 0;
}