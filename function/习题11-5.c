char *match( char *s, char ch1, char ch2 ){
    char *p=NULL,*tmp=s;
    while( *tmp != '\0'){
        if( *tmp == ch1 ){
            p=tmp;
            while( *tmp != '\0'){
                printf("%c",*tmp);
                if( *tmp == ch2) break;
                else tmp++;
            }
            printf("\n");
            return p;
        }else tmp++;
    }
    if( p==NULL){
        printf("\n");
        p=tmp;
    }
    return p;
}


