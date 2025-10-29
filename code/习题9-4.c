#include <stdio.h>
#include <string.h>
#define max 10
#define max0 31

int main(){
    char name[max][max0];
    double price[max];
    int max_index=0,min_index=0;
    int n=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("\n");
        gets(name[i]);
        scanf("%lf",&price[i]);
    }
    for(int i=0; i<n; i++){
        if(price[i] > price[max_index]) max_index=i;
        if(price[i] < price[min_index]) min_index=i;
    }
    printf("%.2f, %s\n",price[max_index],name[max_index]);
    printf("%.2f, %s",price[min_index],name[min_index]);
    return 0;
}