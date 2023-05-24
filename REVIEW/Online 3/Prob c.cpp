#include <stdio.h>

int main () {
	float a,b;
	int testcase,i;
	scanf ("%d", &testcase);
	for (i=1;i<=testcase;i++){
	scanf ("%f %f",&a,&b);
	printf ("%.2f\n", (a/360)*b);
	}

return 0;
}


