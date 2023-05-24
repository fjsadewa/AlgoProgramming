#include <stdio.h>
#include <string.h>

int main (){
	int CCG_kecil=15000, CCG_sedang=20000, CCG_besar=25000, GBM_kecil=30000, GBM_sedang=40000, GBM_besar=50000, FH_kecil=10000, FH_sedang=17500, FH_besar=25000;
	int menu, pesanan, x, y, z;
    char ukuran[10], tempat[10];
    
	printf("Menu Makanan (nomor menu) : ");
    scanf("%d",&menu);
    printf("Porsi (Kecil/sedang/besar): ");
    scanf("%s",&ukuran);
    printf("Banyak Makanan: ");
    scanf("%d",&pesanan);
    printf("disini atau dirumah : ");
    scanf("%s",&tempat);
    printf("\n");

    if(menu==1){
        if(strcmp(ukuran,"kecil")==0){
            if(strcmp(tempat,"disini")==0){
                x = pesanan * CCG_kecil;
                y = x + (x*10/100);
                printf("Diskon = 0\n");
				printf("Total Harga = %d\n",x);
				printf("Pajak = %d \n",x*10/100);
				printf("Bayar = %d",y);
            }else if(strcmp(tempat,"dirumah")==0){
                x = pesanan * CCG_kecil;
                printf("Diskon = 0\n");
				printf("Total Harga = %d\n",x);
				printf("Pajak = 0\n");
				printf("Bayar = %d",x);
            }
        }else if(strcmp(ukuran,"sedang")==0){
            if(strcmp(tempat,"disini")==0){
                x = pesanan * CCG_sedang;
				y = x + (x * 10 / 100);
				printf("Diskon = 0\n");
				printf("Total Harga = %d\n",x);
				printf("Pajak = %d\n",x*10/100);
				printf("Bayar = %d",y);
            }else if(strcmp(tempat,"dirumah")==0){
                x=pesanan * CCG_sedang;
				printf("Diskon = 0\n");
				printf("Total Harga = %d\n",x);
				printf("Pajak = 0\n");
				printf("Bayar = %d",x);
            }
        }else if(strcmp(ukuran,"besar")==0){
            if(strcmp(tempat,"disini")==0){
                x = pesanan * CCG_besar;
				y = x + (x * 10 / 100);
				printf("Diskon = 0\n");
				printf("Total Harga = %d\n",x);
				printf("Pajak = %d\n",x*10/100);
				printf("Bayar = %d",y);
            }else if(strcmp(tempat,"dirumah")==0){
                x = pesanan * CCG_besar;
				printf("Diskon = 0\n");
				printf("Total Harga = %d\n",x);
				printf("Pajak = 0\n");
				printf("Bayar = %d",x);
            }
        }
    }
	if(menu==2){
        if(strcmp(ukuran,"kecil")==0){
            if(strcmp(tempat,"disini")==0){
                x = pesanan * GBM_kecil;
                y = x + (x*10/100);
                printf("Diskon = 0\n");
				printf("Total Harga = %d\n",x);
				printf("Pajak = %d \n",x*10/100);
				printf("Bayar = %d",y);
            }else if(strcmp(tempat,"dirumah")==0){
                x = pesanan * GBM_kecil;
                printf("Diskon = 0\n");
				printf("Total Harga = %d\n",x);
				printf("Pajak = 0\n");
				printf("Bayar = %d",x);
            }
        }else if(strcmp(ukuran,"sedang")==0){
            if(strcmp(tempat,"disini")==0){
                x = pesanan * GBM_sedang;
				y = x + (x * 10 / 100);
				printf("Diskon = 0\n");
				printf("Total Harga = %d\n",x);
				printf("Pajak = %d\n",x*10/100);
				printf("Bayar = %d",y);
            }else if(strcmp(tempat,"dirumah")==0){
                x=pesanan * GBM_sedang;
				printf("Diskon = 0\n");
				printf("Total Harga = %d\n",x);
				printf("Pajak = 0\n");
				printf("Bayar = %d",x);
            }
        }else if(strcmp(ukuran,"besar")==0){
            if(strcmp(tempat,"disini")==0){
                x = pesanan * GBM_besar;
				y = x + (x * 10 / 100);
				printf("Diskon = 0\n");
				printf("Total Harga = %d\n",x);
				printf("Pajak = %d\n",x*10/100);
				printf("Bayar = %d",y);
            }else if(strcmp(tempat,"dirumah")==0){
                x = pesanan * GBM_besar;
				printf("Diskon = 0\n");
				printf("Total Harga = %d\n",x);
				printf("Pajak = 0\n");
				printf("Bayar = %d",x);
            }
        }
	}
if(menu==3){
        if(strcmp(ukuran,"kecil")==0){
            if(strcmp(tempat,"disini")==0){
                x = pesanan * FH_kecil;
                y = x + (x*10/100);
                printf("Diskon = 0\n");
				printf("Total Harga = %d\n",x);
				printf("Pajak = %d \n",x*10/100);
				printf("Bayar = %d",y);
            }else if(strcmp(tempat,"dirumah")==0){
                x = pesanan * FH_kecil;
                printf("Diskon = 0\n");
				printf("Total Harga = %d\n",x);
				printf("Pajak = 0\n");
				printf("Bayar = %d",x);
            }
        }else if(strcmp(ukuran,"sedang")==0){
            if(strcmp(tempat,"disini")==0){
                x = pesanan * FH_sedang;
				y = x + (x * 10 / 100);
				printf("Diskon = 0\n");
				printf("Total Harga = %d\n",x);
				printf("Pajak = %d\n",x*10/100);
				printf("Bayar = %d",y);
            }else if(strcmp(tempat,"dirumah")==0){
                x=pesanan * FH_sedang;
				printf("Diskon = 0\n");
				printf("Total Harga = %d\n",x);
				printf("Pajak = 0\n");
				printf("Bayar = %d",x);
            }
        }else if(strcmp(ukuran,"besar")==0){
            if(strcmp(tempat,"disini")==0){
                x = pesanan * FH_besar;
				y = x + (x * 10 / 100);
				printf("Diskon = 0\n");
				printf("Total Harga = %d\n",x);
				printf("Pajak = %d\n",x*10/100);
				printf("Bayar = %d",y);
            }else if(strcmp(tempat,"dirumah")==0){
                x = pesanan * FH_besar;
				printf("Diskon = 0\n");
				printf("Total Harga = %d\n",x);
				printf("Pajak = 0\n");
				printf("Bayar = %d",x);
            }
        }
	}

    return 0;
}


