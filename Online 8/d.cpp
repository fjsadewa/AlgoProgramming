#include<stdio.h>

int bintang(int a,int n,int i){
	if(n==1){
		for(i=0;i<a-n;i++)printf(" ");
		printf("*\n");
	}
	else{
		bintang(a,n-1,i);
		for(i=0;i<a-n;i++)printf(" ");
		for(i=0;i<2*n-1;i++)printf("*");
		printf("\n");
		bintang(a,n-1,i);
	}
	
}
int main(){
	long long int n,a,i;
	scanf("%lld",&a);
	n=a;
	bintang(n,a,i);
	return 0;
}
