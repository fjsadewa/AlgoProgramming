#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Jumlah_karyawan,x;

struct data_karyawan{
    char Nama_karyawan [50];
    int ID,Jam_kerja,Jam_lembur;
    long long int harian,Gaji,pajak,belum_pajak;
     	
}data[100];

void Hitung_gaji (int buku) {
	data[buku].harian=250000;
	
	if (data[buku].Jam_kerja==8){
		data[buku].belum_pajak=data[buku].harian;
		data[buku].pajak=data[buku].belum_pajak*0.05;
		data[buku].Gaji=data[buku].belum_pajak-data[buku].pajak;
	}
	else if (data[buku].Jam_kerja>8){
    	data[buku].Jam_lembur=data[buku].Jam_kerja-8;
    	data[buku].belum_pajak=data[buku].Jam_lembur*25000+data[buku].harian;
    	data[buku].pajak=data[buku].belum_pajak*0.05;
    	data[buku].Gaji=data[buku].belum_pajak-data[buku].pajak;
	} 
}

void hasil(){
 	puts("\t\t\t\t\tData Honor Harian Karyawan Honorer");
    puts("\t\t\t\t\t\t     PT ABC");
    puts("==========================================================================================================");
    puts("|| ID\t| Nama\t\t| Jumlah\t| Kelebihan\t| Honor sebelum\t| Total pajak\t| Total\t\t||");
	puts("||\t| Karyawan\t| Jam Kerja\t| Jam Kerja\t| Pajak (Rp)\t| (Rp)\t\t| Honor (Rp)\t||"); 
	puts("==========================================================================================================");  
    for(x=1;x<=Jumlah_karyawan;x++){
    Hitung_gaji(x);
    printf("|| H%02d\t| %s\t\t| %d\t\t| %d\t\t| %lld\t| %lld\t\t| %lld\t||\n",data[x].ID,data[x].Nama_karyawan,data[x].Jam_kerja,data[x].Jam_lembur,data[x].belum_pajak,data[x].pajak,data[x].Gaji);
	} 
	puts("==========================================================================================================");

}

int main(){
    puts("Berapa jumlah karyawanmu ?");
    scanf("%d",&Jumlah_karyawan);
    getchar();
    system("cls");
    for(x=1;x<=Jumlah_karyawan;x++){
    	printf("Karyawan #%d\n",x);
    	puts("ID karyawannya berapa : ");
        scanf("%d",&data[x].ID);
        getchar();
        puts("Nama karyawannya siapa: ");
        scanf("%[^\n]",&data[x].Nama_karyawan);
        getchar();
        puts("Bekerja berapa jam hari ini : ");
        scanf("%d",&data[x].Jam_kerja);
        getchar();
        system("cls");
    }
    hasil();
    puts("");
    puts("Terima Kasih :)");
	return 0;
}
