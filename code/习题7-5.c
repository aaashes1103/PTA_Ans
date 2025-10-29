#include<stdio.h>
#define max 6

int main(){
    int s[max][max];
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&s[i][j]);
        }
    }

    int maxj=0,flag=1;
    for(int i=0;i<n;i++){
        flag=1;
        maxj=0;
        for(int j=0;j<n;j++){
            if(s[i][j]>=s[i][maxj]) maxj=j;
        }
        for(int k=0;k<n;k++){
            if(s[k][maxj]<s[i][maxj]) flag=0;
        }
        if(flag) {
            printf("%d %d",i,maxj);
            return 0;
        }
    }
    printf("NONE");
    return 0;
}