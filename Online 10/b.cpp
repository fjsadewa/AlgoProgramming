#include<stdio.h>
#include<string.h>

struct name{
char Nama[255];
int sama;
};

int main(){
struct name n[1005];
int x,t,j;
	scanf("%d",&t);
	for(x=0;x<t;x++){
		scanf("%s",n[x].Nama);
		}
	for(x=0;x<t;x++){
		for(j=x+1;j<t;j++){
			if(n[x].Nama[0]!='\0' && strcmp(n[x].Nama,n[j].Nama)==0){
				n[x].sama=1;	
				n[j].Nama[0]='\0';	
			}
		}
	}

int total=0;
	for(x=0;x<t;x++){
		if(n[x].sama==1){
			total++;
		}
	}
	printf("You have %d duplicate name(s).\n",total);
	return 0;
}
