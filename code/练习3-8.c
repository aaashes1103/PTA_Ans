#include<stdio.h>

int main(){
    double price[5]={0,3.00,2.50,4.10,10.20};
    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
    int index=0;
    for(int i=0;i<5;i++){
        scanf("%d",&index);
        if(index>=1 && index<=4) printf("price = %.2f\n",price[index]);
        else if(index==0) break;
        else printf("price = %.2f\n",0.00);
    }
    return 0;
}