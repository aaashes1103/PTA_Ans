#include <stdio.h>

double trans(int fahr);

int main(){
    int lower = 0 ,upper = 0;
    scanf("%d %d",&lower,&upper);
    if(lower <= upper && upper <= 100){
        printf("fahr celsius\n");
        for(int i = lower;i <= upper;i += 2){
            printf("%d%6.1lf\n",i ,trans(i));
        }
    }
    else {printf("Invalid.");}
    return 0;
    
}

double trans(int fahr){
        double ret = 0 ;
        ret = 5.0 *(fahr - 32)/9;
        return ret;
}