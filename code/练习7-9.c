#include<stdio.h>

int ifLeap(int year){
    return ((year%4==0 && year%100!=0) || year%400==0)? 1:0;
}

int main(){
    int year,month,day;
    scanf("%d/%d/%d",&year,&month,&day);
    int t[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int ret=0;
    ret+=day;
    for(int i=0;i<month-1;i++){
        ret+=t[i];
    }
    if(ifLeap(year) && month>2) ret++;
    printf("%d",ret);
}