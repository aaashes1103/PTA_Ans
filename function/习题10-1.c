int search( int n ){
    int cnt=0,num=0;
    int n1,n2,n3;
    for( int i=pow(101,0.5)+1; i<=pow(n,0.5); i++ ){
        num=i*i;
        n1=num%10;
        n2=num/10%10;
        n3=num/100;
        if( n1==n2 || n1==n3 || n2==n3 ) cnt++;
    }
    return cnt;
}