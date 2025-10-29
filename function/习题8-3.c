void ArrayShift( int a[], int n, int m ){
    int x=0;
    for(int i=0;i<m;i++){
        x=a[n-1];
        for(int j=1;j<n;j++){
            a[n-j]=a[n-j-1];
        }
        a[0]=x;
    }
}