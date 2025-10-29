int set_grade( struct student *p, int n){
    int cnt=0;
    for(int i=0; i<n; i++){
        if(p->score >= 85) p->grade='A';
        else if(p->score >= 70) p->grade='B';
        else if(p->score >= 60) p->grade='C';
        else{
            p->grade='D';
            cnt++;
        }
        p++;
    }
    return cnt;
}