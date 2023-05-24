#include <stdio.h>

int main (void){
	int a, b;
	printf ("Enter an integer: \n");
	scanf("%d",&b); 
	for (a=0;a<=10; a++){
		printf ("%d*%d =%d\n",a, b,(a*b));
	}
}
