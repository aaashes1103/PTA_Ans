#include <stdio.h>

struct info{
	char name[11];
	int birthday;
	char telnum[18];
};

int main(){
	int n;
	scanf("%d",&n);
	struct info a[n],*p,*ptr[n];
	for(int i=0;i<n;i++){
		scanf("%s %d %s",a[i].name,&(a[i].birthday),a[i].telnum);
		ptr[i]=&(a[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ptr[i]->birthday>ptr[j]->birthday){
				p=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=p;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%s %d %s\n",ptr[i]->name,ptr[i]->birthday,ptr[i]->telnum);
	}
	return 0;
}