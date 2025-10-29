#include<stdio.h>

int main(){
    int H,n;
    double s,h;
    scanf("%d %d",&H,&n);
    if(n==0){
        printf("%.1f %.1f",0.0,0.0);
        return 0;
    }
    s=H;
    h=H;
    for(int i=1;i<n;i++){
        h=h/2.0;
        s+=2*h;
    }
    printf("%.1f %.1f",s,h/2.0);
    return 0;
}