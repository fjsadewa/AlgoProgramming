#include <stdio.h>
int main (void) {
	int a,b;
	printf ("Enter an integer : \n");
	scanf("%d", &b);
	printf ("Times %d Table\n", b);
	for (a=0;a<=10;a++)
		{printf ("%d*%d=%d \n",a, b,(a*b));
		}
	return 0;
	}
