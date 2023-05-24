#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	FILE *fp;
	fp=fopen("testdata_2hbd.in","r");
	if(fp==NULL){
		printf("Gaada njirr awokaoka\n");
		exit(1);
	}
	fscanf(fp,"%d",&n);
	printf("jadi... hmmm met ultah ke-%d ya gan",n);
	fclose(fp);
}

