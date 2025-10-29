int sum( int n ){
    if(n>1) return n+sum(n-1);
    else if(n>0) return n;
    else return 0;
}