#include<stdio.h>

long long int t (long long int m,long long int n){
	if(n==0) 
	return 0;
	else if(m==0) 
	return 0;
	else 
	return 2*m+3*n + t(m-1,n) + t(m,n-1);
}

int main(){
	long long int n,m;
	scanf("%lld %lld",&m,&n);
	printf("%lld\n",t(m,n));
		return 0;
	}
