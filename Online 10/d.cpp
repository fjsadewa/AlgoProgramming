#include<stdio.h>
#include<string.h>

struct mahasiswa{
	char name[255];
	int grup;
};

int main(){
	struct mahasiswa mhs[255];
	int x,j,n,a,k;
		scanf("%d",&n);
			for(x=1;x<=n;x++){
				scanf("%d",&a);
					for(j=1;j<=a;j++){
						scanf("%s %d",&mhs[j].name,&mhs[j].grup); 
						}
				printf("Case #%d:\n",x);
				int count[25]={0};
					for(j=1;j<=20;j++){
						for(k=1;k<=a;k++){
							if(mhs[k].grup==j){
								count[j]++;
								}
							}
						if(count[j]!=0){
						printf("Group %d(%d):\n",j,count[j]);
							}
						for(k=1;k<=a;k++){
							if(mhs[k].grup==j){
								printf("%s\n",mhs[k].name);
								}
							}
						}
					for(j=1;j<=a;j++){
						mhs[j].grup=0;
							strcpy(mhs[j].name,"");
						}		
				}
 return 0;
}
