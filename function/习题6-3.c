int factorsum( int number ){
    int sum=0;
    for(int i=1;i<number;i++){
        if(number%i==0){
            sum+=i;
        }
    }
    return sum;
}
void PrintPN( int m, int n ){
    int cnt=0;
    for(int i=m;i<=n;i++){
        if(i==factorsum(i)){
            cnt++;
            if(cnt!=1){
                printf("\n");
            }
            printf("%d = 1",i);
            for(int j=2;j<i;j++){
                if(i%j==0){
                    printf(" + %d",j);
                }
            }
        }
    }
    if(cnt==0){
        printf("No perfect number");
    }
}