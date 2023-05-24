#include<stdio.h>

int main(){
int Testcase,j,k;
	scanf("%d", &Testcase);
	for(int i=1; i<=Testcase; i++){
		int N, loop;
		scanf("%d", &N);
		loop = N;
		long long int a[2][N], temp[N], total1=0, total2=0, max=0;
		for(j=0; j<2; j++){
			for(k=0; k<N; k++){
    		scanf("%lld", &a[j][k]);
			}
		}
		
	if(N==1){
		if(a[1][0]>a[0][0]){
    	max = 1;
		}
	else{
    	max = 0;
		}
	}
	else{
		for( j=0; j<N; j++){
    		temp[j] = a[1][j];
			}
   		for(k=0; k<N; k++) {
			if(a[1][k]>a[0][k]){
			total1 += 1;
			}
			else {
			total1 += 0;
			}
		}
		
		for(j=1; j<=loop-1; j++) {
			a[1][0] = temp[N-1];
			for(k=1; k<N; k++) {
     			a[1][k] = temp[k-1];
				}
			
		for(k=0; k<N; k++) {
			temp[k] = a[1][k];
    		}
    	
    	for(k=0; k<N; k++){
			if(a[1][k]>a[0][k]){
    			total2 += 1;
			}	
			else {
			total2 += 0;
    		}	
    	}
    
   		if(total2 > total1){
			max = total2;
			total1 = total2;
			total2 = 0;
    		}
		else{
			max = total1;
			total2 = 0;
    		}
			}
		}
	printf("Case #%d: %lld\n", i, max+N);
	}
}
