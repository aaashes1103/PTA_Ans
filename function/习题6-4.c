
int fib( int n ){
    if(n<=2){
        return 1;
    }else{
        return fib(n-1)+fib(n-2);
    }
}
void PrintFN( int m, int n ){
    int cnt=0;
    for(int i=1;;i++){
        if(fib(i)>=m){
            cnt++;
            if(fib(i)>n){
                cnt--;
                break;
            }
            printf("%d",fib(i));
            if(fib(i+1)>n){
                break;
            }else{
                printf(" ");
            }
        }
    }
    if(cnt==0){
        printf("No Fibonacci number");
    }
}
