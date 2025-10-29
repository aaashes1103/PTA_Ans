double fn( double x, int n ){
    #include<math.h>
    if(n>1){
        if(n%2==0) return -pow(x,n)+fn(x,n-1);
        else return pow(x,n)+fn(x,n-1);
    }else return x;
}