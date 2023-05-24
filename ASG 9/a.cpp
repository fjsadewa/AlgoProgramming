#include<stdio.h>
#include<string.h>

int main(){
	char fb[50][1000];
	int Testcase,n;
	scanf("%d",&Testcase);
	for(int i=1;i<=Testcase;i++){
		scanf("%d %s %s",&n,&fb[0],&fb[1]);
		for(int j=2;j<=n;j++){
		strcpy(fb[j],fb[j-1]);
		strcat(fb[j],fb[j-2]);
		}
    printf("Case #%d: %s\n",i,fb[n]);
	}
	return 0;
}
