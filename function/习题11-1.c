char *getmonth( int n ) {
    char *months[12] = {"January", "February", "March", "April", "May", "June", "July", 
               "August", "September", "October", "November", "December"};
    if(n >= 1 && n <= 12) return months[n - 1];
    else return NULL;
}

