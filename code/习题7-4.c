#include<stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int term,sum=0;
    for(int i=0;i<m;i++){
        sum=0;
        for(int j=0;j<n;j++){
            scanf("%d",&term);
            sum+=term;
        }
        printf("%d\n",sum);
    }
    return 0;
}