char * match(char *s, char ch){
    char *p=NULL;
    while(*s){
        if (*s==ch){
            p=s;
        }
        s++;
    }
    return p;
}