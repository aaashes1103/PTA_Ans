#include <stdio.h>
#include <string.h>

int main(){
	char str[5][81],*p[5],*tmp=NULL;
	for(int i=0;i<5;i++){
		scanf("%s",&str[i]);
		p[i]=&str[i][0];
    }
	for(int i=0;i<5-1;i++){
		for(int j=i+1;j<5;j++){
			if(strcmp(p[j],p[i])<0){
				tmp=p[i];
				p[i]=p[j];
				p[j]=tmp;
			}
		}
	}
    printf("After sorted:\n");
	for(int i=0;i<5;i++){
		printf("%s\n",p[i]);
	}
	return 0;
}