#include <stdio.h>

int main(){
    int n, num,max=0;
    int count[10]={0};
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&num);
        do {
            count[num%10]++;
            num/=10;
        }while( num > 0 );
    }
    for(int i=0; i<10; i++){
        if(count[i]>max) max=count[i];
    }
    printf("%d:",max);
    for(int i=0; i<10; i++){
        if(count[i]==max) printf(" %d",i);
    }
    return 0;
}