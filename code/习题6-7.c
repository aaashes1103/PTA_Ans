#include<stdio.h>

int main(){
    int a=0,b=0;
    char ch;
    scanf("%d",&a);
    while(1){
        scanf("%c",&ch);
        if(ch=='='){
            printf("%d",a);
            break;
        }
        scanf("%d",&b);
        if(ch=='+') a=a+b;
        else if(ch=='-') a=a-b;
        else if(ch=='*') a=a*b;
        else if(ch=='/'){
            if(b==0){
                printf("ERROR");
                break;
            }else{
                a=a/b;
            }
        }
        else{
            printf("ERROR");
            break;
        }
    }
    return 0;
}