int reverse( int number ){
    int flag=1;
    if(number<0){
        number=-number;
        flag=-1;
    }
    int ret=0;
    while(number>0){
        ret=ret*10+number%10;
        number/=10;
    }
    return flag*ret;
}