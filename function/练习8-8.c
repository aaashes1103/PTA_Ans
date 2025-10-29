void Shift( char s[] ){
    int len;
    len=strlen(s);
    for(int n=0;n<3;n++){
        char a=0;
        a=s[0];
        for(int i=1;i<len;i++){
            s[i-1]=s[i];
        }
        s[len-1]=a;
    }
}