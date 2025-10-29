#include<stdio.h>

int main(){
    char term;
    scanf("%c\n",&term);
    char c;
    int i=0,maxi=-1;
    while((c=getchar())!='\n'){
        if(term==c) maxi=i;
        i++;
    }
    if(maxi<0) printf("Not Found");
    else printf("index = %d",maxi);
    return 0;
}