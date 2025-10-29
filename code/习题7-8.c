#include<stdio.h>

int main(){
    char c;
    int flag=0,ret=0;
    while((c=getchar())!='#'){
        if(c=='-' && flag==0 && ret==0) flag=1;
        if(c>='0' && c<='9'){
            if(ret==0) ret+=(int)c-48;
            else ret=ret*16+(int)c-48;
        }
        if(c>='A' && c<='F'){
            if(ret==0) ret+=(int)c-55;
            else ret=ret*16+(int)c-55;
        }
        if(c>='a' && c<='f'){
            if(ret==0) ret+=(int)c-87;
            else ret=ret*16+(int)c-87;
        }
    }
    if(flag==1) ret=-ret;
    printf("%d",ret);
    return 0;
}