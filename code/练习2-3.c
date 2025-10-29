#include<stdio.h>

int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<5-i;k++){
            printf("*");
            if(k<4-i){
                printf(" ");
            }else{
                printf("\n");
            }
        }
    }
    return 0;
}