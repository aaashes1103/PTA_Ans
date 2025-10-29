struct ListNode *readlist(){
	struct ListNode *head=NULL, *p, *pre, *after;
	p=(struct ListNode *)malloc(sizeof(struct ListNode));
	head=p;
	pre=p;
	scanf("%d",&p->data);
	p->next=NULL;
	while( p->data > 0 ){
		if(pre != p ) pre->next=p;
		after=(struct ListNode *)malloc(sizeof(struct ListNode));
		pre=p;
		p=after;
		p->next=NULL;
		scanf("%d",&p->data);
	}
	return head;
}

 struct ListNode *getodd( struct ListNode **L ){
    struct ListNode *tmp,*head,*pre,*p,*q,*oddhead=NULL,*oddpre;
    head=*L;
    tmp=head;
    pre=head;
    p=(struct ListNode *)malloc(sizeof(struct ListNode));
    oddpre=p;
    p->next=NULL;
    while( tmp ){
        if(tmp->data %2 ==1 ){
            if(oddhead == NULL) oddhead=p;
            p->data=tmp->data;
            if(oddpre != p) oddpre->next=p;
            q=(struct ListNode *)malloc(sizeof(struct ListNode));
            oddpre=p;
            p=q;
            p->next=NULL;
            if(tmp==head){
                head=tmp->next;
                pre=head;
            }else{
                pre->next=tmp->next;
            }
            tmp=tmp->next;
        }else{
            pre=tmp;
            tmp=tmp->next;
        }
    }
    *L=head;
    return oddhead;
}