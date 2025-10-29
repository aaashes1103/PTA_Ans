#include<stdio.h>

int main(){
    int speed=0,standard=0;
    double x=0;
    scanf("%d %d",&speed,&standard);
    x=((float)(speed-standard)/standard)*100.0;
    if(x<10) printf("OK");
    else if(x>=10 && x<50) printf("Exceed %.0f%%. Ticket 200",x);
    else printf("Exceed %.0f%%. License Revoked",x);
}