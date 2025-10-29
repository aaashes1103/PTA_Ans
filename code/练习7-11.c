#include<stdio.h>
#include<string.h>
#define max 81

int main(){
    char s[max];
    char c;
    int i=0;
    while((c=getchar())!='\n'){
        s[i]=c;
        i++;
    }
    while(i>0){
        printf("%c",s[i-1]);
        i--;
    }
    return 0;
}