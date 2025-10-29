int insert(int a[ ], int value){
    int i=0;
    while(a[i] < value && i < Count){
        i++;
    }
    if(a[i] == value && i < Count) return -1;
    else{
        for(int j=Count; j>i; j--){
            a[j]=a[j-1];
        }
        a[i]=value;
        Count++;
        return Count;
    }
}

int del(int a[ ], int value){
    int i=0;
    while(a[i] != value && i < Count){
        i++;
    }
    if( i == Count) return -1;
    else{
        for(int j=i; j<Count; j++){
            a[j]=a[j+1];
        }
        Count--;
        return Count;
    }
}

int modify(int a[ ], int value1, int value2){
    int i=0,j=0,tmp;
    while(a[i] != value1 && i < Count){
        i++;
    }
    if( i == Count) return -1;
    while(a[j] != value2 && j < Count){
        j++;
    }
    if( j != Count) return -1;
    a[i]=value2;
    for(int p=0; p<Count-1; p++){
        for(int q=p+1; q<Count; q++){
            if(a[q] < a[p]){
                tmp=a[p];
                a[p]=a[q];
                a[q]=tmp;
            }
        }
    }
    return Count;
}

int query(int a[ ], int value){
    int i=0;
    int j=Count-1;
    int mid=0;
    while(i<=j){
        mid=(i+j)/2;
        if(a[mid] == value){
            return mid;
        }else if(a[mid] > value){
            j=mid-1;
        }else if(a[mid] < value){
            i=mid+1;
        }
    }
    return -1;
}