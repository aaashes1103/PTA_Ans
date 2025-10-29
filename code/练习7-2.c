#include<stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    int num=0,max=0,index=0;
    scanf("%d",&max);
    for(int i=1;i<n;i++){
        scanf("%d",&num);
        if(num>max){
            max=num;
            index=i;
        }
    }
    printf("%d %d",max,index);
    return 0;
}