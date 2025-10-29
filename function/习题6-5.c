int prime( int p ){
    if(p==1 || p<=0){
        return 0;
    }else if(p==2){
        return 1;
    }
    for(int i=2;i<pow(p,0.5)+1;i++){
        if(p%i==0){
            return 0;
           }
        }
    return 1;
}
void Goldbach( int n ){
    for(int i=3;i<n;i+=2){
        if(prime(i)*prime(n-i)==1){
            printf("%d=%d+%d",n,i,n-i);
            break;
        }
    }
}