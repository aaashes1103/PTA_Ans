#include<stdio.h>

int main(){
    int year=0;
    scanf("%d",&year);
    int cnt=0;
    if(year>2100 || year<=2000){
        printf("Invalid year!");
        return 0;
    }
    for(int i=2001;i<=year;i++){
        if((i%4==0 && i%100!=0) || i%400==0){
            printf("%d\n",i);
            cnt++;
        }
    }
    if(cnt==0){
        printf("None");
    }
    return 0;
}