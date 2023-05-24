#include<stdio.h>

long long int f(long long int n){
	if(n==1)
	return 1;
	else if (n%2==0) 
	return f(n/2);
	else if(n%2!=0) 
	return f(n-1)+f(n+1);
}

int main(){
	long long int i,n,T;
	scanf("%lld",&T);
	for(i=0;i<T;i++){
		scanf("%lld",&n);
		printf("Case #%lld: %lld\n",i+1,f(n));
	}
	return 0;
}
