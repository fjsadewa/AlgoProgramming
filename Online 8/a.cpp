#include<stdio.h>

int main(){

long long int T,N,F;
     scanf("%lld",&T);
     for(int i=0;i<T;i++){
     	scanf("%lld",&N);
     	long long int a=0,b=1,sum=0;
     	for(int j=1;j<=N;j++){
     	if(j==1||j==2)F=b;
     	else if(j>2){
     		F=(a%1000000009)+(b%1000000009);
		 }
     	a=b;
     	b=F;
     	sum=sum+(F%1000000009);
	 }
	 printf("Case #%lld: %lld\n",i+1,sum%1000000009);
}
	return 0;
}
