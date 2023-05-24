#include <stdio.h>
#include <string.h>

int a,b,data;

struct data_pustaka{
	int kode;
	char judul[100];
	char penulis[50];
};

void selection_kode(struct data_pustaka arr[], int x) {
 struct data_pustaka tukar;
    for (a = 0; a < x - 1; a++) {
        int temp = a;
        for (b = a + 1; b < x; b++) {
            if (arr[b].kode > arr[temp].kode) {
                temp = b;
            }
        }
        tukar = arr[a];
        arr[a] = arr[temp];
        arr[temp] = tukar;
    }
}

void quick_kode(struct data_pustaka *arr,int x,int y){
	a = x, b = y;
	struct data_pustaka temp;
	struct data_pustaka mid = arr[(x+y)/2];
	while (a<b){
		while (arr[a].kode>mid.kode)a++;
		while (arr[b].kode<mid.kode)b--;
		if (a<=b){
			temp = arr[a];
			arr[a] = arr[b];
			arr[b] = temp;
			a++;
			b--;
		}	
	}
	if (x<b) quick_kode(arr,x,b);
	if (a<y) quick_kode(arr,a,y);
}

void selection_penulis(struct data_pustaka arr[], int x) {
 struct data_pustaka tukar;
    for (a = 0; a < x - 1; a++) {
        int temp = a;
        for (b = a + 1; b < x; b++) {
            if (arr[b].kode > arr[temp].kode) {
                temp = b;
            }
        }
        tukar = arr[a];
        arr[a] = arr[temp];
        arr[temp] = tukar;
    }
}

void quick_penulis(struct data_pustaka *arr,int x,int y){
	a = x, b = y;
	
	struct data_pustaka temp;
	struct data_pustaka mid = arr[(x+y)/2];
	while (a<b){
		while (strcmp(arr[a].penulis,mid.penulis)>0)a++;
		while (strcmp(arr[b].penulis,mid.penulis)<0)b--;
		if (a<=b){
			temp = arr[a];
			arr[a] = arr[b];
			arr[b] = temp;
			a++;
			b--;
		}	
	}
	if (x<b) quick_penulis(arr,x,b);
	if (a<y) quick_penulis(arr,a,y);
}

void Hasil (struct data_pustaka arr[]) {
	puts("||==============================================================================||");
	puts("||\t Kode \t|\t\t Judul \t\t\t|\t Penulis \t||");
	puts("||--------------|---------------------------------------|-----------------------||");
	for (a=0;a<data;a++){

	printf("||\t %d \t| %s \t\t| %s \t\t||\n",arr[a].kode,arr[a].judul,arr[a].penulis);
	}
}

int main () {
	struct data_pustaka arr [500];
	
	int pilihan_pertama,pilihan_kedua;
	
	puts("\t\t\t\t DAFTAR PUSTAKA");
	puts("||==============================================================================||");
	puts("||\t Kode \t|\t\t Judul \t\t\t|\t Penulis \t||");
	puts("||--------------|---------------------------------------|-----------------------||");
	puts("||\t 3129 \t| The Algorithm Design Manual \t\t| Skiena,S.S \t\t||");
	puts("||\t 1714 \t| C++ Primer PLus, 4th Ed \t\t| Prata,S. \t\t||");
	puts("||\t 2391 \t| Using Turbo Pascal 7.0 \t\t| Hennefeld,J.O \t||");
	puts("||\t 2434 \t| SQL: The Complete Reference \t\t| Groff, J.R. \t\t||");
	puts("||\t 3348 \t| Computer Arithmetic Algorithm \t| Koren, I. \t\t||");
	puts("||\t 1554 \t| C Programming Language \t\t| Kerninghan, B.W. \t||");
	puts("||\t 3196 \t| Operation System Concepts \t\t| Silberschatz, A. \t||");
	puts("||\t 2520 \t| Assmbly Languange Step by Step \t| Duntemann, J \t\t||");
	puts("||\t 1449 \t| DB2 Developer's Guide, 4th \t\t| Ed Mullins, C.S. \t||");
	puts("||\t 3200 \t| Classic Data Structures in Java \t| Budd, T. \t\t||");
	puts("||\t 2731 \t| Turbo Pascal \t\t\t\t| Koffman, E.B \t\t||");
	puts("||\t 3425 \t| Data Structure Using C/C++ \t\t| Langsam, Y. \t\t||");
	puts("||\t 1964 \t| Intoduction to Algorithms, 2nd ED \t| Ed Cormen, T.H \t||");
	puts("||\t 2575 \t| C Traps and Pitfalls \t\t\t| Koenig, A. \t\t||");
	puts("||\t 1590 \t| Visual Basic 6.0 Unleashed \t\t| Thayer, R. \t\t||");
	puts("||==============================================================================||");
	
	puts("");
	puts("Datanya lihat di Tabel atas ya!");
	puts("Ada berapa data nih yang mau di masukkan :");
	scanf ("%d",&data);
	
	for (a=0;a<data;a++){
		puts("");
		printf("Data ke #%d\n",a+1);
		puts ("Kode Bukunya berapa :");
		scanf("%d",&arr[a].kode);
		getchar();
		puts ("Lalu Judulnya :");
		scanf("%[^\n]",&arr[a].judul);
		getchar();
		puts ("Penulis Siapa :");
		scanf("%[^\n]",&arr[a].penulis);
		getchar();
	}
	
	puts("Mau diurutkan berdasarkan apa nih?");
	puts("1. Berdasarkan Kodenya");
	puts("2. Berdasarkan Nama Penulisnya");
	scanf ("%d",&pilihan_pertama);
	if (pilihan_pertama==1){
		puts("");
		puts("Data ini diurutkan secara Descending ya!");
		puts("Ini dengan metode Selection Sort");
		selection_kode(arr,data);
		Hasil(arr);
		puts("");
		puts("Ini dengan metode Quick Sort");
		quick_kode(arr,b,data-1);
		Hasil(arr);
	}
	
	else if (pilihan_pertama==2){
		puts("");
		puts("Data ini diurutkan secara Descending ya!");
		puts("Ini dengan metode Selection Sort");
		selection_penulis(arr,data);
		Hasil(arr);
		puts("");
		puts("Ini dengan metode Quick Sort");
		quick_penulis(arr,b,data-1);
		Hasil(arr);
	}
	printf("Terima Kasih :)");
return 0;
}
