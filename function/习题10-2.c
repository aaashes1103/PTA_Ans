double fact( int n ){
    if(n>1) return n*fact(n-1);
    else return 1;
}
double factsum( int n ){
    if(n>1) return fact(n)+factsum(n-1);
    else if(n>0) return fact(1);
    else return 0;
}