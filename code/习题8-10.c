#include<stdio.h>

int main(){
    int n;
    scanf("%d\n",&n);
    double term,total,max,min;
    for(int i=0;i<n;i++){
        scanf("%lf",&term);
        if(i==0){
            max=term;
            min=term;
        }else if(term>max){
            max=term;
        }else if(term<min){
            min=term;
        }
        total+=term;
    }
    printf("average = %.2f\n",total/n);
    printf("max = %.2f\n",max);
    printf("min = %.2f",min);
    return 0;
}