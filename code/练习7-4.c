#include<stdio.h>
#define max 20

void getnum(int n,int s[]);

int main(){
    int n1,n2;
    int s1[max],s2[max],same[max],diff[max];
    int flag=0,first=0,cnt=0,cnt1=0;
    scanf("%d",&n1);
    getnum(n1,s1);
    scanf("%d",&n2);
    getnum(n2,s2);
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(s1[i]==s2[j]){
                same[cnt]=s1[i];
                cnt++;
            }
        }
    }
    for(int i=0;i<n1;i++){
        flag=0;
        for(int j=0;j<cnt;j++){
            if(s1[i]==same[j]) flag=1;
        }
        for(int k=0;k<cnt1;k++){
            if(s1[i]==diff[k]) flag=1;
        }
        if(flag==0){
            diff[cnt1]=s1[i];
            cnt1++;
            if(first==0){
                printf("%d",s1[i]);
                first=1;
            }else{
                printf(" %d",s1[i]);
            }
        }
    }
    for(int i=0;i<n2;i++){
        flag=0;
        for(int j=0;j<cnt;j++){
            if(s2[i]==same[j]) flag=1;
        }
        for(int k=0;k<cnt1;k++){
            if(s2[i]==diff[k]) flag=1;
        }
        if(flag==0){
            diff[cnt1]=s2[i];
            cnt1++;
            if(first==0){
                printf("%d",s2[i]);
                first=1;
            }else{
                printf(" %d",s2[i]);
            }
        }
    }
    return 0;
}

void getnum(int n,int s[]){
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
}