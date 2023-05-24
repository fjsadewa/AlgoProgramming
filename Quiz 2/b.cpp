#include<stdio.h>

unsigned long long int num[101][101];
unsigned long long int i,j,k,a,b;

unsigned long long int count(unsigned long long int i,unsigned long long int j,unsigned long long int N){
unsigned long long int ctr=0;
	for(a=i;a<i+N;a++){
		for(b=j;b<j+N;b++){
		ctr+=num[a][b];
  		}
 	}
 return ctr;
}

int main(){
	unsigned long long int M,N;
 	scanf("%llu",&M);
 	for(i=0;i<M;i++){
  	for(j=0;j<M;j++) scanf("%llu",&num[i][j]);
 	}
 	scanf("%llu",&N);
 	unsigned long long int sum=0;
 	for(i=0;i<M+1-N;i++){
  		for(j=0;j<M+1-N;j++){
   		unsigned long long int ctr=count(i,j,N);
   	if(ctr>sum) sum=ctr;
  }
 }
printf("%llu\n",sum);
return 0;
}
