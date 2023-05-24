#include <stdio.h>
int main(){
	int a;
		printf (" masukkan angka =");
	scanf ("%d", &a);
	if ( a%2 == 0)
		printf ("angka genap", a);
	else
		printf ("angka ganjil", a);
	return 0;
}
