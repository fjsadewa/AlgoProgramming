#include<stdio.h>

long long int findbin(long long int arr){
long long int L=1,R=1500000,NA=0; 
	while (L <= R){
		long long int mid = (L + R)/2; 
		if ((mid*(mid+1)*((2*mid)+1)/6)<arr){
		L=mid+1;
		NA=mid;
		}
  		else{
		R = mid - 1;
		}
	}
return NA;
}

int main(){
int Testcase;
long long int M;
	scanf("%lld",&Testcase);
	for(int i=0;i<Testcase;i++){
		scanf("%lld",&M);
		long long int found = findbin(M);
		printf("Case #%d: %lld\n",i+1,found+1);
	}
return 0;
}
