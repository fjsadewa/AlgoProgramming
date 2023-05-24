#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct plants{
    int number;
    char plants_name[100];
};

int main(){
	int i;
    FILE *fptr;
    fptr = fopen("testdata.in","r");
    if(fptr == NULL){
    	fprintf(stderr, "File tidak ditemukan!");
    	return 1;
    }
    int Testcase;
    fscanf(fptr, "%d", &Testcase);
    struct plants list[Testcase];
    for(i = 0; i<Testcase; i++){
		fscanf(fptr, "%d#%[^\n]", &list[i].number, &list[i].plants_name);
    }
    struct plants temp;
    for(i = 0; i<Testcase; i++){
    	for(int j = i+1; j<Testcase; j++){
    		if(strcmp(list[i].plants_name, list[j].plants_name)>0){
    			temp=list[i];
    			list[i]=list[j];
    			list[j]=temp;
			}
		}
	}
    for(i = 0; i<Testcase; i++){
        printf("%d %s\n", list[i].number, list[i].plants_name);
    }
    fclose(fptr);
return 0;
}
