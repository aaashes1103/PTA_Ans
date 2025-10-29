#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );
    
int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("s = %d\n", SumA(a,n));    
    
    return 0;
}

int fn( int a, int n ){
    int ret=0;
    for(int i=0;i<n;i++){
        ret=ret*10+a;
    }
    return ret;
}

int SumA( int a, int n ){
    int ret=0;
    for(int i=1;i<=n;i++){
        ret=ret+fn(a,i);
    }
    return ret;
}