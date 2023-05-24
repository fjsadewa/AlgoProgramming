#include <stdio.h>

int main (){
	int i;
	int *ptr,**ptr_ptr;
	i=5;
	ptr=&i;
	printf("%d %x\n",i,ptr);
	*ptr=50;
	printf ("%d\n",i);
	printf ("%d\n",*ptr);
	**ptr_ptr=100;
	printf ("%d",**ptr_ptr);
	return 0;
}
