#include<stdio.h>

int main(){
    int h,m,s;
    scanf("%d:%d:%d\n",&h,&m,&s);
    int n=0,a=0;
    scanf("%d",&n);

    s+=n;
    if(s>=60){
        a=s/60;
        s=s%60;
    }
    m+=a;
    a=0;
    if(m>=60){
        a=m/60;
        m=m%60;
    }
    h=(h+a)%24;
    printf("%d%d:%d%d:%d%d",h/10,h%10,m/10,m%10,s/10,s%10);
    return 0;
}