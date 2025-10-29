#include<stdio.h>

int main(){
    int t,n,flag,term;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        flag=1;
        scanf("%d",&n);
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                scanf("%d",&term);
                if(k<j && term!=0) flag=0;
            }
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}