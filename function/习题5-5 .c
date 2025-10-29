int CountDigit( int number, int digit ){
    if(number<0){
        number=-number;
    }
    int n=0;
    if (digit==0 && number==0){
        n++;
    }else{
        while(number>0){
        if(number%10==digit){
            n++;
           }
           number=number/10;
        }
    }
    return n;
}