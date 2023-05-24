#include <stdio.h>

int main (){
	int a,b;
	printf ("Input nilai 1 dan Nilai 2 :");
	scanf ("%d %d",&a,&b);
	
	if (a>b){ 
	printf ("Nilai 1 lebih besar dari Nilai 2\n");
	}
	else if(a<b) {
	printf ("Nilai 1 lebih kecil dari Nilai 2\n");
	}
	else if(a=b) {
	printf ("Nilai 1 sama dengan Nilai 2\n");
	}
	return 0;
}
