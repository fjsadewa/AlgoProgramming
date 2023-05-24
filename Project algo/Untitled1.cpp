#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int T;
int plus;
struct data {
 	long long int tanggal;
 	char name[170];
}all[1000000];

struct produk {
	char jenis [100];
	char NProduk [100];
 	long long int Jumlah;
	int Harga;
 	long long int Total;
}farmasi[1000000];

FILE *fptr;

void sortingtanggal();
void total();
void inputData();
void showData();
void searchData();

int main (){
 	T = 0;
 	int count = 0;
 	int ans;

    fptr = fopen("farmasi.txt", "w");
    fclose(fptr);

    do{
 		printf("\t\t\t Welcome to pharmacy cashier\n");
 		printf("1. Input Data \n2. Show Data \n3. Search Data \n4. Terminate Program \n5. Delete All Data \n\n");
	 	printf("Choose (1,2,3,4,5): ");
 		scanf("%d", &ans);
 		if(ans == 1){
 			inputData();
 			system("cls");
		}else if(ans == 2){
			showData();
			system("cls");
		}else if(ans == 3){
			searchData();
			system("cls");
		}else if(ans == 4){
			break;
		}else if(ans == 5){
			system("cls");
			fptr = fopen("farmasi.txt", "w+");
			fclose(fptr);
			printf("Data Already Deleted\n");
			printf("Press Enter to Return to Main Menu");
			getch();
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

void sortingtanggal(struct data dat[], struct produk prod[]){
	struct data d;
	struct produk p;
	for(int i = 0; i < T; i++){
 		for(int j = i + 1; j < T; j++){
 			if(dat[i].tanggal > dat[j].tanggal){
 				d = dat[i];
 				dat[i] = dat[j];
 				dat[j] = d;
 				p = prod[i];
 				prod[i] = prod[j];
 				prod[j] = p;
			}
		}
	}
}

void total(struct data dat[], struct produk prod[]){
	struct data d;
	struct produk p;
	for(int i = 0; i < T; i++){
 		for(int j = i+1; j < T; j++){
 			if(dat[i].name > dat[j].name){
 				p = prod[i];
 				prod[i] = prod[j];
 				prod[j] = p;
 				d = dat[i];
 				dat[i] = dat[j];
 				dat[j] = d;
			}
		}
	}
}

void inputData(){
	system("cls");

	struct data all[T];
 	struct produk farmasi[T];
// 	int plus;
 	int count;
 	fptr = fopen ("farmasi.txt","a+");
 	if(fptr == NULL){
        printf("Error\n");
  		exit(1);
    }
 	printf("\t\t\t\t    Input Data\n");
 	printf("\n*Keterangan:\t Tanggal saja tidak perlu Bulan dan Tahun\n\t\t Nama Lengkap ataupun Panggilan\n\t\t Harga yang di inputkan tanpa koma\n\n ");
 	printf("Input data (3 - 100) = ");
 	scanf("%d", &plus);

 	if(plus < 3 || plus > 100){
 		do{
 			printf("Data yang di masukan (3 - 100)\n");
 			printf("Tekan enter untuk menginput kembali");
 			getch();
 			system("cls");
 			printf("\t\t\t\t    Input Data\n");
 			printf("Data yang ingin diinputkan (3 - 100) = ");
 			scanf("%d", &plus);
 		}
	while(plus < 3 || plus > 100);
 	}

	int temp = T;
	T += plus;

    for (count = temp; count < T; count ++){
    	printf  ("\ndata ke-%d:\n", count+1);
    	printf  ("Tanggal Transaksi \t:  ");
  		scanf   (" %lld", &all[count].tanggal);
  		printf  ("Nama Pelanggan \t\t: ");
  		scanf   (" %[^\n]", &all[count].name);
  		printf  ("Jenis Produk \t\t: ");
  		scanf   (" %[^\n]", &farmasi[count].jenis);
 		printf  ("Nama Produk \t\t: ");
	  	scanf   (" %[^\n]", &farmasi[count].NProduk);
  		printf  ("Jumlah Produk \t\t: ");
  		scanf   (" %lld", &farmasi[count].Jumlah);
  		printf  ("Harga Produk \t\t: ");
  		scanf   (" %d", &farmasi[count].Harga);
  		farmasi[count].Total = farmasi[count].Jumlah*farmasi[count].Harga;
  		fprintf(fptr, "Tanggal transaksi \t: %lld \nNama Pelanggan \t\t: %s \nJenis Produk \t\t: %s \nNama Produk \t\t: %s \nJumlah Produk \t\t: %lld buah \nHarga Produk \t\t: Rp %d \nTotal Pembayaran \t: Rp %lld\n\n", all[count].tanggal,all[count].name,farmasi[count].jenis,farmasi[count].NProduk,farmasi[count].Jumlah,farmasi[count].Harga,farmasi[count].Total);
	}
	fclose(fptr);
}

void showData (){
	int count;
	system ("cls");
	fptr = fopen ("farmasi.txt","r");
	
	if(fptr == NULL){
		printf("Data masih Kosong\n");
 		exit(1);
	}
	else {
		printf("\t\t\t\t==================================\n");
		printf("\t\t\t\t\t    Data Penjualan\n");
		printf("\t\t\t\t==================================\n\n");
		fscanf(fptr,"farmasi.txt");
		count=1;
		while (count<=plus) {
		printf  ("Tanggal Transaksi \t: %lld \n", all[count].tanggal);
		fscanf 	(fptr,"%lld",&all[count].tanggal);
  		printf  ("Nama Pelanggan \t\t: %s \n", all[count].name);
  		fscanf 	(fptr,"%s",&all[count].name);
  		printf  ("Jenis Produk \t\t: %s \n", farmasi[count].jenis);
  		fscanf 	(fptr,"%s",&farmasi[count].jenis);
 		printf  ("Nama Produk \t\t: %s \n", farmasi[count].NProduk);
 		fscanf 	(fptr,"%s",&farmasi[count].NProduk);
  		printf  ("Jumlah Produk \t\t: %lld \n", farmasi[count].Jumlah);
  		fscanf 	(fptr,"%lld",&farmasi[count].Jumlah);
  		printf  ("Harga Produk \t\t: %d \n", farmasi[count].Harga);
  		fscanf 	(fptr,"%d",&farmasi[count].Harga);
  		printf  ("Total Pembayaran \t: %lld \n\n", farmasi[count].Total);
  		fscanf 	(fptr,"%lld",&farmasi[count].Total);
		count++;
		}
	
	printf("\nPress Enter to Return to the Main Menu");
	getch();
	fclose(fptr);		
	}
}

void searchData(){
	long long int tanggal,nama;
	int temp = -1;
	system("cls");

	fptr = fopen("farmasi.txt", "r+");

	struct data dat[T];
	struct produk cour[T];

	for(int i=0; i<T; i++){
		fscanf(fptr, "%lld %*s %s %*s %lld %*f %f\n",&dat[i].tanggal,dat[i].name,cour[i].jenis,cour[i].Jumlah,cour[i].Total);

}
	printf("\t\t\t==================================\n");
 	printf("\t\t\t\t    Search Data\n");
  	printf("\t\t\t==================================\n\n");

	printf("Input Tanggal: ");
	scanf("%lld", &tanggal);
	for(int i=0; i<T; i++){
		if(dat[i].tanggal == tanggal){
			temp = i;
			break;
		}
	}
	if(temp != -1){
		printf("tanggal: %s\n", dat[temp].tanggal);

	}else{
		printf("DATA not Found\n");
	}
	printf("\nPress Enter to Return to the Main Menu");
	getch();
	fclose(fptr);

}
