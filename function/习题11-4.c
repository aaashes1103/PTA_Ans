char *str_cat( char *s, char *t ){
    char *p=s;
    while( *s != '\0' ){
        s++;
    }
    while( *t != '\0' ){
        *s=*t;
        s++;
        t++;
    }
    *s='\0';
    return p;
}