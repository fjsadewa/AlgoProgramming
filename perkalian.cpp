#include <stdio.h>
int main (void){
	int a, b;
	printf ("Times 8 Table\n");
	b=8;
	for (a=0;a<=10; a++){
		printf ("%d*%d =%d\n",a, b,(a*b));
	}
}
