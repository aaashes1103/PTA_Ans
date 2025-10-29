bool palindrome( char *s ){
    bool flag=true;
    char *tmp=s;
    while( *tmp != '\0' ){
        tmp++;
    }
    tmp--;
    while( *s != '\0'){
        if( *s != *tmp ){
            flag=false;
            break;
        }
        *s++;
        *tmp--;
    }
    return flag;
}