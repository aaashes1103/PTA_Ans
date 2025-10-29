int max_len( char *s[], int n ){
    unsigned int max_length=0;
    for(int i=0; i<n; i++){
        if( strlen( s[i] ) > max_length ) max_length=strlen( s[i] );
    }
    return max_length;
}