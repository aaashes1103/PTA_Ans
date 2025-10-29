#include<stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    int count=0;
    int sum=0;
    int term=0;
    for(int i=0;i<n;i++){
        scanf("%d",&term);
        if(term>=60){
            count+=1;
        }
        sum+=term;
    }
    if(n!=0){
        printf("average = %.1f\n",sum*1.0/n);
    }else{
        printf("average = %.1f\n",0.0);
    }
    printf("count = %d",count);
    return 0;
}