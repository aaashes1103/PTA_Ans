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

 struct ListNode *deletem( struct ListNode *L, int m ){
    struct ListNode *tmp,*head,*pre;
    head=L;
    tmp=head;
    pre=head;
    while(tmp){
        if(tmp->data ==m ){
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
    L=head;
    return L;
}