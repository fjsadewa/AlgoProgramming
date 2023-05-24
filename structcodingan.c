#include <stdio.h>
#define MAX 100 //konstanta untuk menentukan banyak elemen maksimal

// Membuat tipe data bentukan bertipe struktur dengan nama SISWA
typedef struct {
  char NIM[8];
  char nama[25];
  float nilai[2];
  char nilai_indeks;
} SISWA;

/* Membuat fungsi untuk menentukan nilai indeks */
char TentukanIndeks(float nilai) {
  char indeks;
    if(nilai>80){
    	indeks='A';
	}
	else if(nilai>=70 && nilai<=80){
		indeks='B';
	}
	else if(nilai>=60 && nilai<70){
		indeks='C';
	}
	else if(nilai>=50 && nilai<60){
		indeks='D';
	}
	else{
		indeks='E';
	}
  return indeks;
}

int main(void) {
    SISWA s[MAX];
    int i,j;
    float nilai;
	printf("Banyaknya Siswa:");
	scanf("%d",&j);
    for(i=1;i<=j;i++){
    	printf("Siswa ke %d: \n",i);
    	printf("Masukan NIM: ");
    	scanf("%s",&s[i].NIM);
    	printf("Masukan Nama: ");
    	scanf("%s",&s[i].nama);
    	printf("Masukan nilai UTS dan UAS:");
    	scanf("%f %f",&s[i].nilai[0],&s[i].nilai[1]);
	}
	for(i=1;i<=j;i++){
		puts("");
	printf("Nilai Siswa %d: ",i);
	printf ("%.2f %.2lf",s[i].nilai[0],s[i].nilai[1]);
	nilai=(0.4*s[i].nilai[0])+(0.6*s[i].nilai[1]);
	s[i].nilai_indeks = TentukanIndeks(nilai);
	puts("");
	printf("NIM: %s\n",s[i].NIM);
	printf("Nama: %s\n",s[i].nama);
	printf("Nilai: %c \n",s[i].nilai_indeks);
	printf("Rata-Rata Nilai: %.2f",nilai);
	puts("");
  }
  return 0;
}

 


