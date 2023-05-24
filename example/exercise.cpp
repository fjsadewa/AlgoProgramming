#include <stdio.h>

int main (){
	int a,b;
	printf ("Pilih 1,2 atau 3:");
	scanf ("%d",&a);
	
	if (a==1){ 
	printf ("Congratz! You get a holiday ticket to Singapore\n");
	}
	else if(a==2) {
	printf ("Congratz! You get a holiday ticket to Sydney\n");
	}
	else if(a==3) {
	printf ("Congratz! You get a holiday ticket to Japan\n");
	}
	else {
	printf ("Salah WOI! Sudah dibaca belum tulisannya!\n");
	}
	return 0;
	
}

