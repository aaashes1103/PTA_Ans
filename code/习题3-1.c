#include<stdio.h>

int main(){
    int num[3]={0,0,0};
    for(int k=0;k<3;k++){
        scanf("%d",&num[k]);
    }
    int t=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2-i;j++){
            if(num[j]>num[j+1]){
                t=num[j+1];
                num[j+1]=num[j];
                num[j]=t;
            }
        }
    }
    printf("%d->%d->%d",num[0],num[1],num[2]);
}