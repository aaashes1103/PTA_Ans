void delchar( char *str, char c){
    int cnt=0,len=0;
    char *p=str, *tmp=str;
    while( *tmp ){
        len++;
        tmp++;
    }
    while( *p != '\0' ){
        if( *p == c){
            for( char *q=p; q<str+len-cnt; q++){
                *q = *(q+1);
            }
            cnt++;
        }else p++;
    }
}