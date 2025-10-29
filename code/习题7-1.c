#include <stdio.h>
#define maxs 10

int main(){
    int num[maxs]={0};
    int n=0,tmp=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&num[i]);
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(num[i] < num[j]){
                tmp=num[i];
                num[i]=num[j];
                num[j]=tmp;
            }
        }
    }
    for(int i=0; i<n-1; i++){
        printf("%d ",num[i]);
    }
    printf("%d",num[n-1]);
    return 0;
}