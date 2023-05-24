#include <stdio.h>
#include <stdlib.h>

int main (){
	char kurung1,kurung2;
	kurung1='(';
	kurung2=')';
	int testcase;
	long long int a,b,c,d,t1; 
	
	scanf ("%d",&testcase);
	for (int i=1;i<testcase;i++){
		scanf("%c%lld+%lld%c x %c%lld -%lld%c",&kurung1,&a,&b,&kurung2,&kurung1,&c,&d,&kurung2);
    t1 = (a+b)*(c-d);
    printf ("%lld\n",t1);
	}

return 0;
}
// perulangan for tidak jalan 
