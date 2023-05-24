#include <stdio.h>

long long int a(long long int n,long long int b){
	if(n==1)
		return 1;
	else if(n%2==0) 
		return 1+a (n/2,b+1);
	else 
		return 1+a(n*3+1,b+1);
}

int main(){
	long long int j,Testcase,N,b,i;
	scanf("%d",&Testcase);
	for(i=0; i<Testcase; i++){
		scanf("%d",&N);
		b = a(N,1);
		b++;
		printf("Case #%d: ",i+1);
		if(b%2==0) printf("Lili\n");
		else printf("Jojo\n");

	}
	return 0;
}
