void StringCount( char *s){
    struct Count{
        int upper;
        int lower;
        int space;
        int number;
        int other;
    };
    struct Count count={0,0,0,0,0,};
    while( *s != '\0'){
        if( *s >= 'A' && *s <= 'Z' ) count.upper++;
        else if( *s >= 'a' && *s <= 'z' ) count.lower++;
        else if( *s >= '0' && *s <= '9' ) count.number++;
        else if( *s == ' ' ) count.space++;
        else count.other++;
        s++;
    }
    printf("%d %d %d %d %d", count.upper, count.lower, count.space, count.number, count.other);
}