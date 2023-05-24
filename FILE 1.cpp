#include <stdio.h>
#include <stdlib.h>

int main(){
	int A, B;
	FILE *fptr;
	
	if ((fptr = fopen("testdata.in","r")) == NULL){
		printf("Error! opening file");
		
		exit(1);
	}
	
	fscanf(fptr, "%d %d", &A, &B);
	
	printf("%d\n", A+B);
	fclose(fptr);
	
	return 0;
}

