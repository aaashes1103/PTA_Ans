char *search(char*s, char*t){
	char *p=s,*q=t,*start=NULL,*tmp;
	while(*p != '\0'){
		if(*p==*t){
			start=p;
			while(*q != '\0'){
				if(*q!=*p) break;
				q++;
				p++;
			}
			if(*q=='\0'){
				break;
			}else{
			    q=t;
			    start=NULL;
		    }
		}else p++;
	}
	return start;
}