void CharPyramid(int n,char ch){
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            printf(" ");
        }
        for(int k=i;k>0;k--){
            if(k==1){
                printf("%c \n",ch);
            }else{
                printf("%c ",ch);
            }
        }
    }
}