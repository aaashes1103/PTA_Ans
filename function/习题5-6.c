int narcissistic( int number ){
    int n1=number,n2=number;
    int n=0;
    double sum=0;
    while(n1>0){
        n++;
        n1/=10;
    }
    while(n2>0){
        int a=1;
        for(int i=0;i<n;i++){
            a*=n2%10;
        }
        sum+=a;
        n2/=10;
    }
    return number==sum? 1:0;
}
void PrintN( int m, int n ){
    for(int i=m+1;i<n;i++){
        if(narcissistic( i )==1){
            printf("%d\n",i);
        }
    }
}