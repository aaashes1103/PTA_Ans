void CountOff( int n, int m, int out[] ){
    int index=0,order=0,count=1;
    int flag[MAXN]={0};
    while( count<=n ){
        if(flag[index]==0){
            if( order==m-1){
                out[index]=count;
                flag[index]=1;
                count++;
            }
            order=(order+1)%m;
        }
        index=(index+1)%n;
    }
}