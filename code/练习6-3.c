#include<stdio.h>

int main(){
    int ch=0;
    while((ch=getchar())!=10){
        if(ch>=65 && ch<=90) putchar(97+(ch-65+1)%26);
        else if(ch>=97 && ch<=122) putchar(65+(ch-97+1)%26);
        else putchar(ch);
    }
    return 0;
}