#include <stdio.h>

int main(){
	unsigned long long int Testcase,N,hsl,i,j;
	scanf("%d",&Testcase);
	for(i=0; i<Testcase; i++){
		scanf("%d",&N);
		if(N>=2){
	unsigned long long int A[100000];
		hsl=0;
		for(j=1; j<=N; j++){
			scanf("%llu",&A[j]);
			if(j%2==0){
				hsl+=A[j];
			}
		}
	printf("Case #%llu: %llu\n",i+1,hsl);
	}
}
	return 0;
}
