void strmcpy( char *t, int m, char *s){
    char *p;
    int len=0;
    p=t;
    while( *p ){
        len++;
        p++;
    }
    if(m<=len){
        t=t+m-1;
        while( *t ){
            *s=*t;
            t+=1;
            s+=1;
        }
        *s='\0';
    }else{
        *s='\0';
    }
}