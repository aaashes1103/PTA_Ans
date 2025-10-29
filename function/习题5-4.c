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
int PrimeSum( int m, int n ){
    int ret=0;
    for(int i=m;i<=n;i++){
        if (prime(i)==1){
            ret+=i;
        }
    }
    return ret;
}