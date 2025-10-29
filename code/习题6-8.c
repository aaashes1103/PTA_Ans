#include<stdio.h>

int main(){
    int word=1;
    char ch;
    while((ch=getchar())!='\n'){
        if(ch==' ') {
            word=1;
        }
        else if(word==1){
            word=0;
            if(ch<='z' && ch>='a'){
                ch-=32;
            }
        }
        putchar(ch);
    }
    return 0;
}
