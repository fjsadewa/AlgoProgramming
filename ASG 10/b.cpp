#include<stdio.h>
struct siswa{
	int index,date,month,years;
	char nama[255];
	char kampus[255];
};

int main(){
	struct siswa s[100];
	int i,j,t,n;
		scanf("%d",&t);
			for(i=0;i<t;i++){
				scanf("%d %d %d %d %s %s",&s[i].index,&s[i].date,&s[i].month,&s[i].years,&s[i].nama,&s[i].kampus);
			}
 		scanf("%d",&n);
 	int a[n];
		for(i=0;i<n;i++){
				scanf("%d",&a[i]);
			for(j=0;j<t;j++){
  				if(a[i]==s[j].index){
    				printf("%d. %s was born on %d/%d/%d and live at %s\n",s[j].index,s[j].nama,s[j].date,s[j].month,s[j].years,s[j].kampus);
  					break;
  				}
  			else if(j==t-1){
   				printf("No data found!\n");
  				}
 			}
		}
return 0;
}

