#include<stdio.h>

int main(){
    int change;
    scanf("%d",&change);
    int count=0,total=0;
    for(int i=change/5;i>0;i--){
        for(int j=(change-i*5)/2;j>0;j--){
            total=i+j+change-i*5-j*2;
            if(change-i*5-j*2==0) continue;
            count++;
            printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i,j,change-i*5-j*2,total);
        }
    }
    printf("count = %d",count);
    return 0;
}