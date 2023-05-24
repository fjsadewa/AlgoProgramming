#include <stdio.h>
int main(){
	int a;
	printf ("number multiples of 3 from 5 to 15 \n");
	for (a=5;a<=15;a++) {
		if (a%3 == 0)
		{printf ("%d\n",a);
		}
	}
	return 0;
}
