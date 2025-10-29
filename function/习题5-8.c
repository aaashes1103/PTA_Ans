void hollowPyramid( int n ){
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k++){
            if(k==1 && i==1){
                printf("%d\n",i);
            }else if(k==1 && i!=1){
                printf("%d",i);
            }else if(k==2*i-1){
                printf("%d\n",i);
            }else if(i==n){
                printf("%d",i);
            }else{
                printf(" ");
            }
        }
    }
}