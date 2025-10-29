#include<stdio.h>

int trans(int n);

int main(){
    int n=0;
    scanf("%d",&n);
    int s[1000]={0};
    int num[5]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    for(int j=0;j<n;j++){
        num[trans(s[j])]++;
    }
    printf("%d %d %d %d %d",num[0],num[1],num[2],num[3],num[4]);
    return 0;
}
int trans(int n){
    if(n>=90) return 0;
    else if(n>=80) return 1;
    else if(n>=70) return 2;
    else if(n>=60) return 3;
    else return 4;
}