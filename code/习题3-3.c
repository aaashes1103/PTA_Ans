#include<stdio.h>

int main(){
    double s=0;
    int time=0;
    scanf("%lf %d",&s,&time);
    double cost=0;
    if(s<=3) cost+=10;
    else if(s<=10) cost+=10.0+(s-3)*2.0;
    else cost+=10.0+7*2.0+(s-10)*3.0;
    if(time%5==0 && time!=0) cost+=(time/5.0)*2.0;
    else cost+=((int)(time/5))*2.0;
    printf("%.0f",cost);
}