#include<stdio.h>
#include<string.h>
struct a{
    char name[1002];
    char name2[1002];
    long long int nilai;
}; 

int main(){
FILE *fp=fopen("testdata.in","r");
int n=0;
int i,j;
struct a arr[100];
	while(!(feof(fp))){
	fscanf(fp,"%[^#]#%[^#]#%lld\n",&arr[n].name,&arr[n].name2,&arr[n].nilai);
	n++;
	}
struct a swap;
for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) { 
            if (arr[j].nilai < arr[j + 1].nilai) {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
            else if(arr[j].nilai==arr[j+1].nilai && strcmp(arr[j].name,arr[j+1].name)>0){
             swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
   }
   else if(arr[j].nilai==arr[j+1].nilai && strcmp(arr[j].name,arr[j+1].name)==0 && strcmp(arr[j].name2,arr[j+1].name2)>0){
             swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
    }
 for(i=0;i<n;i++){
  printf("%s by %s - %lld\n",arr[i].name,arr[i].name2,arr[i].nilai);
 }
fclose(fp);
 return 0;
}
