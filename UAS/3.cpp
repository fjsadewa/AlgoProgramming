#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


FILE *fptr;
int Jumlah_karyawan,x,buku,j;

struct data_karyawan{
    char Nama_karyawan [50],ID [50];  
    int Jam_kerja,Jam_lembur;
    long long int harian,Gaji,pajak,belum_pajak;
     	
}data[100];

void inputData(){
	system("cls");
	data[buku].harian=250000;
	puts("Berapa jumlah karyawanmu ?");
    scanf("%d",&Jumlah_karyawan);
    getchar();
    FILE *fp = fopen("Honorer.txt", "a");
    
	for(x=0;x<Jumlah_karyawan;x++){
    	printf("Karyawan #%d\n",x+1);
    	puts("ID karyawannya berapa : ");
        scanf("%[^\n]",&data[buku].ID);
        getchar();
        puts("Nama karyawannya siapa: ");
        scanf("%[^\n]",&data[buku].Nama_karyawan);
        getchar();
        puts("Bekerja berapa jam hari ini : ");
        scanf("%d",&data[buku].Jam_kerja);
        getchar();
	
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
		fprintf(fp,"%s#%s#%d#%d#%lld\n",data[buku].ID,data[buku].Nama_karyawan,data[buku].Jam_kerja,data[buku].Jam_lembur,data[buku].Gaji);
        system("cls");
    }
	fclose(fptr);
}

void scan(){
	FILE *fp = fopen("Honorer.txt", "r");
	while(fscanf(fp,"%[^#]#%[^#]#%d#%d#%d\n",&data[buku].ID,&data[buku].Nama_karyawan,&data[buku].Jam_kerja,&data[buku].Jam_lembur,&data[buku].Gaji)!=EOF){
	buku++;
	}
	fclose(fp);
}

void hasil(){
 	puts("\t\t\t\t\tData Honor Harian Karyawan Honorer");
    puts("\t\t\t\t\t\t     PT ABC");
    puts("==========================================================================================================");
    puts("|| ID\t| Nama\t\t| Jumlah\t| Kelebihan\t| Total\t\t||");
	puts("||\t| Karyawan\t| Jam Kerja\t| Jam Kerja\t| Honor (Rp)\t||"); 
	puts("==========================================================================================================");  
    for(x=0;x<buku;x++){
    printf("|| H%02s\t| %s\t\t| %d\t\t| %d\t\t| %lld\t||\n",data[x].ID,data[x].Nama_karyawan,data[x].Jam_kerja,data[x].Jam_lembur,data[x].Gaji);
	} 
	puts("==========================================================================================================");
}

void Delete(){
char Nama_karyawan [50][50] = {'\0'}, temp[1000] = {'\0'},ID [50][50] = {'\0'};
int Jam_kerja[1000] = {0}, Jam_lembur[1000] = {0}, Gaji[1000] = {0};        
    int i = 0;
    int hapus;
    
    FILE *fp = fopen("Honorer.txt", "r");
    while(fscanf(fp,"%[^#]#%[^#]#%d#%d#%d\n",&data[buku].ID,&data[buku].Nama_karyawan,&data[buku].Jam_kerja,&data[buku].Jam_lembur,&data[buku].Gaji)!=EOF){
        buku++;
    }
    
    hasil();
    printf ("\npilih yang ingin di delete ( baris ke-): ");
    scanf ("%d", &hapus);
    printf ("\nakan di hapus\n H%s. %s %d\n",data[hapus-1].ID, data[hapus-1].Nama_karyawan, data[hapus-1].Jam_lembur);
    printf ("\ninput kode yang ingin di hapus:");
    getchar();
    scanf (" %s", data[hapus-1].ID);
    strcpy(temp, data[hapus-1].ID); 
    fclose(fp); 
    
    for(j= 0; j < buku; j++){
        if(strcmp(data[j].ID, temp) != 0){
            strcpy(ID[i], data[j].ID);
            strcpy(Nama_karyawan[i], data[j].Nama_karyawan);
            Jam_kerja[i] = data[j].Jam_kerja;
            Jam_lembur[i] = data[j].Jam_lembur;    
            Gaji[i] = data[j].Gaji;
            ++i;
        }

    }
    
    FILE *fp2 = fopen("Honorer.txt", "w"); 
    for(j = 0; j < i; j++)
    {
       fprintf(fp,"\n%s#%s#%d#%d#%d\n",ID[j],Nama_karyawan[j],Jam_kerja[j],Jam_lembur[j],Gaji[j]);
    }
    fclose(fp2); 
    scan();
}

void Nambah(){
 FILE *fp = fopen("Honorer.txt", "r");
    while(fscanf(fp,"%[^#]#%[^#]#%d#%d#%d\n",&data[buku].ID,&data[buku].Nama_karyawan,&data[buku].Jam_kerja,&data[buku].Jam_lembur,&data[buku].Gaji)!=EOF){
        buku++;
    }
    hasil();
    
    int baru;
    printf ("\npilih yang ingin di ubah (baris ke-): ");
    scanf ("%d", &baru);
    printf ("\nAnda akan mengedit\n%s. %s %d\n", data[baru-1].ID, data[baru-1].Nama_karyawan, data[baru-1].Jam_lembur);
    printf ("Masukkan Jam :");
    getchar();
    scanf (" %d", &data[baru-1].Jam_kerja);
	
	if (data[baru-1].Jam_kerja==8){
		data[baru-1].belum_pajak=data[baru-1].harian;
		data[baru-1].pajak=data[baru-1].belum_pajak*0.05;
		data[baru-1].Gaji=data[baru-1].belum_pajak-data[baru-1].pajak;
	}
	else if (data[buku].Jam_kerja>8){
    	data[baru-1].Jam_lembur=data[baru-1].Jam_kerja-8;
    	data[baru-1].belum_pajak=data[baru-1].Jam_lembur*25000+data[baru-1].harian;
    	data[baru-1].pajak=data[baru-1].belum_pajak*0.05;
    	data[baru-1].Gaji=data[baru-1].belum_pajak-data[baru-1].pajak;
	}
    fclose(fp); 
    
    FILE *fp2 = fopen("Honorer.txt", "w"); 
    for(j = 0; j < buku; j++)
    {
       fprintf(fp,"\n%s#%s#%d#%d#%d\n",data[j].ID,data[j].Nama_karyawan,data[j].Jam_kerja,data[j].Jam_lembur,data[j].Gaji);
    }
    fclose(fp2);
}

int main(){
	int ans;
	fptr = fopen("honorer.txt", "w");
    fclose(fptr);
    
 do{
 		printf("\t\t\t Welcome to PT.ABC\n");
 		printf("1. Input Data \n2. Show Data \n3. Delete Data \n4. Update program \n5. Terminated Program \n\n");
	 	printf("Choose (1,2,3,4,5): ");
 		scanf("%d", &ans);
 		if(ans == 1){
 			inputData();
 			system("cls");
		}else if(ans == 2){
 			system("cls");
			scan();
 			hasil();
		}else if(ans == 3){
			system("cls");
			Delete();
			puts("");
			printf("success \n");
			getchar();
		}else if(ans == 4){
			system("cls");
			Nambah();
			puts("");
			printf("success \n");
		}else if(ans == 5){
			break;
		}else{
			printf("Option not Found\n");
			printf("Press Enter to Input Again");
			getch();
			system("cls");
		}
	}while(ans != 5);

	printf("\nProgram Will be Terminated\n");
    puts("");
    puts("Terima Kasih :)");
	return 0;
}
