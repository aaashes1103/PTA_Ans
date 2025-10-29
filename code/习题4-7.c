#include<stdio.h>

int main(){
    int m,n,t,m1,n1;
    scanf("%d %d",&m,&n);
    m1=m;
    n1=n;
    while(n1!=0){
        t=n1;
        n1=m1%n1;
        m1=t;
    }
    printf("%d %d",m1,m*n/m1);
    return 0;
}