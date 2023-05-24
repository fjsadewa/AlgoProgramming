#include <stdio.h>

int main () {
	int Testcase;
	double N,P,Hasil;
	scanf ("%d",&Testcase);
	for (int i=0;i<Testcase;i++){
		scanf("%lf %lf",&N,&P);
		Hasil = P /((100 -N)/100);
		printf ("$%.2lf\n",Hasil);
	}
}
