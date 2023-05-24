#include <stdio.h>
#include <string.h>

int main(){
	int i,j,Testcase;
	scanf("%d",&Testcase);
	getchar();
    char name[10][5] = {"","unu","du","tri","kvar","kvin","ses","sep","ok","nau"};
 
	for(i=0;i<Testcase;i++){
		int temp,a;
  		scanf("%d",&temp);
  		printf("Case #%d:",i+1);
  		a=temp/1000%10;
  		if(a!=0){
   		if(a!=1) printf(" %s",name[a]);
   		printf(" mil");
  	}
 
	a=temp/100%10;
	if(a!=0){
		if(a!=1) printf(" %s",name[a]);
   	else printf(" ");
   		printf("cent");
	}
	
 	a=temp/10%10;
  	if(a!=0){
   		if(a!=1) printf(" %s",name[a]);
   		else printf(" ");
   	printf("dek");
  	} 
	   
	a=temp%10;
	if(a!=0){
   	printf(" %s",name[a]);
  	}
  	puts("");
 	}
return 0;
}
