#include<stdio.h>
#include<math.h>

int main(){
int Testcase;
int M,N,y,x;
	scanf("%d",&Testcase);
	for(int i=1;i<=Testcase;i++) {
		y=0;x=0;
		scanf("%d %d",&M,&N);
		for(int j=M;j<=N;j++){
		x=pow(2,j-1);
		y=y+x;
	}
	printf("Case #%d: %d\n",i,y);
	}
}
