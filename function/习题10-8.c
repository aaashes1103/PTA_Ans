void printdigits( int n ){
    int num=0;
    num=n;
    if ( n==0 ){
        printf("%d\n",n);
    }
    else {
        if ( num>9 ) printdigits(num/10);
        printf("%d\n",num%10);
    }
}