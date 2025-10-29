#include<stdio.h>

int main(){
    char term;
    while((term=getchar())!='\n'){
        if(term>='A' && term<='Z'){
            putchar(90-(term-65));
        }else{
            putchar(term);
        }
    }
    return 0;
}