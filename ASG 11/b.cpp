#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	FILE *fptr;
	int T1,T2,X=0;
	char M[200][100], T[200][100], Sec[200][100];
	fptr=fopen("testdata.in" ,"r");
	fscanf(fptr, "%d" ,&T1);
	for(int i=0;i<T1;i++){
  		fscanf(fptr, "\n%[^#]" ,&M[i]);
  		fscanf(fptr, "#%[^\n]" ,&T[i]);
 	}
 	fscanf(fptr, "%d" ,&T2);
 	for(int i=0;i<T2;i++){
  		fscanf(fptr, "\n%[^\n]" ,&Sec[i]);
  		for(int j=0;j<T1;j++){
   			if(strcmp (M[j],Sec[i]) == 0){
    			printf("Case #%d: %s\n" ,i+1,T[j]);
    			break;
   			}
   			X += 1;
  		}
   		if(X == T1){
   			printf("Case #%d: N/A\n", i+1);
  		}
  	X=0;
 	}
 	
 	return 0;
	
}

