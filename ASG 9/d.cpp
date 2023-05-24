#include<stdio.h>

int main () {
int Testcase;
long long int N, kons, hsl, count;
	scanf("%d", &Testcase);
	for (int i=1;i<=Testcase;i++) {
	hsl = 1;
	count = 0;
	scanf("%lld", &N); 
	kons = 2;
	while (kons>1){	
		if (N%kons == 0){
			N = N/kons;
			count++;
		}
		else
		{
		hsl = hsl * (1+count); 
		kons++;
			if(kons*kons>N){
			kons = N;
		}
		 count = 0;
 		}
 	}
	printf("Case #%d: %lld\n", i, hsl);
	}
	return 0;
	}
