#include <stdio.h>
#include <string.h>

int main () {
	char *hari, bulan [10];
	int tahun;
	printf ("Penulisan nama bulan dengan huruf kecil semua\n");
	printf (" Nama Bulan : ",bulan);
	scanf ("%s",&bulan);
	
	if (strcmp (bulan,"januari")==0) {
		hari="31";
		}
	else if (strcmp (bulan,"februari")==0) {
		printf ("jika tahun kabisat pilih 1 jika tidak pilh 2:  ");
		        scanf("%d",&tahun);
        if(tahun==1){
            hari = "29";
        }else if(tahun==0){
        hari = "28";
		} }
	else if (strcmp (bulan,"maret")==0) {
		hari="31";
		}
	else if (strcmp (bulan,"april")==0) {
		hari="30";
		}		
	else if (strcmp (bulan,"mei")==0) {
		hari="31";
		}
	else if (strcmp (bulan,"juni")==0) {
		hari="30";
		}
	else if (strcmp (bulan,"juli")==0) {
		hari="31";
		}
	else if (strcmp (bulan,"agustus")==0) {
		hari="31";
		}
	else if (strcmp (bulan,"september")==0) {
		hari="30";
		}
	else if (strcmp (bulan,"oktober")==0) {
		hari="31";
		}
	else if (strcmp (bulan,"november")==0) {
		hari="30";
		}
	else if (strcmp (bulan,"desember")==0) {
		hari="31";
		}	
	printf ("%s",hari);

}

