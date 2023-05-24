#include <stdio.h>
#include <string.h>
int main () {
	char *prov,kota[50];
	printf ("Penulisan dengan huruf kecil semua\n");
	printf ("Nama Ibukota di pulau Jawa: ");
	scanf ("%s",&kota);
	if (strcmp (kota,"surabaya")==0) {
		prov="jawa timur";
		}
	else if (strcmp(kota,"semarang")==0){
		prov="jawa tengah";	
		}
	else if (strcmp(kota,"bandung")==0){
		prov="jawa barat";	
		}
	else if (strcmp(kota,"serang")==0){
		prov="banten";	
		}
	else if (strcmp(kota,"yogjakarta")==0){
		prov="Daerah Istimewa Jogjakarta";	
		}
	printf ("%s",prov); 
return 0;
}
