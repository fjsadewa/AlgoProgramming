#include <stdio.h>

int main (){
	int i;
	int *ptr;
	i=5;
	ptr=&i;
	printf("%d %x\n",i,ptr);
	*ptr=50;
	printf ("%d\n",i);
	printf ("%d",*ptr);
	return 0;
}
