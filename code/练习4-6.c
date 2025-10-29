#include<stdio.h>

int main(){
    int ansnum=0, n=0;
    scanf("%d %d",&ansnum,&n);
    int guessnum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&guessnum);
        if(guessnum<0){
            printf("Game Over");
            return 0;
        } else if(guessnum==ansnum){
            if(i==0) printf("Bingo!");
            else if(i<3) printf("Lucky You!");
            else printf("Good Guess!");
            return 0;
        }else if(guessnum<ansnum) printf("Too small\n");
        else printf("Too big\n");
    }
    printf("Game Over");
    return 0;
}