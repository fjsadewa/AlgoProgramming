#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int T;
int plus;
struct data {
 	long long int tanggal;
 	char name[150];
 	char id[10];
}all[1000000];

struct produk {
	char jenis [100];
	char NProduk [100];
 	int Jumlah;
	int Harga;
 	long long int Total;
}farmasi[1000000];

FILE *fptr;

void sortingID();
void inputData();


int main (){
 	T = 0;
 	int count = 0;
 	int ans;

    fptr = fopen("honorer.txt", "w");
    fclose(fptr);

    do{
	 	printf("Ketik 1 untuk Input data =");
 		scanf("%d", &ans);
 		if(ans == 1){
 			inputData();
 			system("cls");
		}else{
			printf("Option not Found\n");
			printf("Press Enter to Input Again");
			getch();
			system("cls");
		}
	}while(ans != 4);

	printf("\nProgram Will be Terminated\n");
	return 0;
}

//void sortingID(struct data dat[], struct produk prod[]){
//	struct data d;
//	struct produk p;
//	for(int i = 0; i < T; i++){
// 		for(int j = i + 1; j < T; j++){
// 			if(dat[i].id > dat[j].id){
// 				d = dat[i];
// 				dat[i] = dat[j];
// 				dat[j] = d;
// 				p = prod[i];
// 				prod[i] = prod[j];
// 				prod[j] = p;
//			}
//		}
//	}
//}

//void total(struct data dat[], struct produk prod[]){
//	struct data d;
//	struct produk p;
//	for(int i = 0; i < T; i++){
// 		for(int j = i+1; j < T; j++){
// 			if(dat[i].name > dat[j].name){
// 				p = prod[i];
// 				prod[i] = prod[j];
// 				prod[j] = p;
// 				d = dat[i];
// 				dat[i] = dat[j];
// 				dat[j] = d;
//			}
//		}
//	}
//}

void inputData(){
	system("cls");

	struct data all[T];
 	struct produk farmasi[T];
 	int count;
 	fptr = fopen ("farmasi.txt","a+");
 	if(fptr == NULL){
       printf("Error\n");
  		exit(1);
    }
 	printf("\t\t\t\t    Input Data\n");
 	printf("Jumlah karyawan : ");
 	scanf("%sd", &plus);

//	int temp = T;
//	T = plus;

//    for (count = temp; count < plus; count ++){
	for (int i=0;i<plus;i++){
   		printf  ("\nID = H0%d\n", i+1);
//    	printf  ("Tanggal Transaksi \t:  ");
//  		scanf   (" %lld", &all[count].tanggal);
  		printf  ("Nama Karyawan \t\t: ");
  		scanf   (" %[^\n]", &all[count].name);
//  		printf  ("Jenis Produk \t\t: ");
//  		scanf   (" %[^\n]", &farmasi[count].jenis);
// 		printf  ("Nama Produk \t\t: ");
//	  	scanf   (" %[^\n]", &farmasi[count].NProduk);
//  		printf  ("Jumlah Produk \t\t: ");
//  		scanf   (" %lld", &farmasi[count].Jumlah);
  		printf  ("Jumlah Jam Kerja \t\t: ");
  		scanf   (" %lld", &farmasi[count].Jumlah);
//  		printf  ("Harga Produk \t\t: ");
//  		scanf   (" %d", &farmasi[count].Harga);
//  		farmasi[count].Total = farmasi[count].Jumlah*farmasi[count].Harga;
//  		fprintf(fptr, "Tanggal transaksi \t: %lld \nNama Pelanggan \t\t: %s \nJenis Produk \t\t: %s \nNama Produk \t\t: %s \nJumlah Produk \t\t: %lld buah \nHarga Produk \t\t: Rp %d \nTotal Pembayaran \t: Rp %lld\n\n", all[count].tanggal,all[count].name,farmasi[count].jenis,farmasi[count].NProduk,farmasi[count].Jumlah,farmasi[count].Harga,farmasi[count].Total);
	}
	fclose(fptr);
}

