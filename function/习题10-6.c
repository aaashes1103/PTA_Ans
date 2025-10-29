int f( int n ){
    if( n==0) return 0;
    else if(n<2) return 1;
    else return f(n-1)+f(n-2);
}