#include <stdio.h>

int narcissistic( int number );

int main()
{
    int n;
    scanf("%d",&n);
    int power=1;
    for(int i=0;i<n;i++){
        power*=10;
    }
    for(int j=power/10;j<power;j++){
        if(narcissistic( j )) printf("%d\n",j);
    }
    return 0;
}

int narcissistic( int number ){
    int n1=number,n2=number;
    int n=0;
    double sum=0;
    while(n1>0){
        n++;
        n1/=10;
    }
    while(n2>0){
        int a=1;
        for(int i=0;i<n;i++){
            a*=n2%10;
        }
        sum+=a;
        n2/=10;
    }
    return number==sum? 1:0;
}