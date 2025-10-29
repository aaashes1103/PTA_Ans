int even( int n ){
    int flag=0;
    if( n%2 == 0) flag=1;
    return flag;
}

int OddSum( int list[], int N){
    int ret=0;
    for(int i=0;i<N;i++){
        if((list[i]%2 != 0)){
            ret+=list[i];
        }
    }
    return ret;
}