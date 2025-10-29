int getindex( char *s ){
    int n=-1;
    char week[7][MAXS]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday",};
    for(int i=0; i<7; i++){
        if( strcmp( s, week[i] ) == 0) n=i;
    }
    return n;
}