#include<stdio.h>

int main(){
    char term;
    int ret=0;
    while((term=getchar())!='\n'){
        if(term>='A' && term<='Z' && term!='A' && term!='E' && term!='I' && term!='O' && term!='U') ret++;
    }
    printf("%d",ret);
    return 0;
}