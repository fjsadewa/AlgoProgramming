#include <stdio.h>
#define pi 3.14

int angka;
void hitung_volume(int jari){
	float volume;
	volume=(4*pi*(jari*jari*jari))/3;
	printf("|%d\t|| %.2f \t|\n",jari,volume);
}

int main () {
	puts ("Perhitungan Volume Bola dengan jari-jari 1-10");
	puts ("=========================");
	puts ("|r \t||\t V\t|");
	puts ("-------------------------");
	for (angka=1;angka<=10;angka++){
		hitung_volume(angka);
	}
	puts ("=========================");
	
	puts ("Terima Kasih :)");
return 0;
}
