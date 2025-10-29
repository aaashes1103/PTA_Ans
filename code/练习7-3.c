#include<stdio.h>
#define Max 10

int main(){
    int n=0;
    int s[Max];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("%d",s[i]);
        if(i==0) printf("\n");
        else printf(" ");
    }
    return 0;
}