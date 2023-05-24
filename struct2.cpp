#include<stdio.h>
#define MAX 100

struct pegawai{
	char nama[100];
	int jam_kerja;
	int total_jam, jam_lembur, bayaran;
};

int lembur (int kerja)
{
    if(kerja >= 8)
        return kerja - 8;
    else
        return 0;
} 

int main()
{
	struct pegawai s[MAX];
	int i,t;
	
	printf("Jumlah Pegawai ");
	scanf("%d", &t);
	
	for(i=1;i<=t;i++)
	{
		printf("Pegawai ke-%d\n",i);  
		printf("Nama pegawai : ");
		getchar();
		scanf("%[^\n]s", &s[i].nama);
		getchar();
		
		printf("Jumlah jam kerja : ");
		scanf("%d", &s[i].jam_kerja);
		s[i].bayaran = 15000;
		if(s[i].jam_kerja > 8){
			s[i].jam_lembur  =s[i].jam_kerja - 8;
			s[i].total_jam= s[i].bayaran + (5000*s[i].jam_lembur);
		}
		else{
			s[i].total_jam = s[i].bayaran;
		}
	}
	
	printf("\t\tDaftar Honor Pegawai Honorer\n");
    printf("\t\t      PT.ALAKADARNYA   \n");        
    printf("_________________________________________________________________________________\n");
    printf("|No	 Nama		 Jumlah			Kelebihan		Jumlah	\n");
    printf("|  	Pegawai		Jam Kerja		Jam Kerja		Honor	\n");
    printf("_________________________________________________________________________________\n");
    
    for(i=1;i<=t;i++)
	{ 
    	printf("|%d 	%s		   %d			  %d			%d	 \n",i, s[i].nama, s[i].jam_kerja, s[i].jam_lembur, s[i].total_jam);
	}
	printf("_________________________________________________________________________________\n");
	
	return 0;
}

