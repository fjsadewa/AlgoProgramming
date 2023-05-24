#include <stdio.h>
 int main (){
 	int a,i,e;
	a=0;e=0;
	scanf ("%d",&a);
	int b[a],k[a];
	for (i=0;i<a;i++)
	{ 
	scanf ("%d",&k[i]);
	}
	for (i=0;i<a;i++){
		k[i]= k[i];
		scanf ("%d",&b[k[i]]);
	}
 	for (i=0;i<a;i++)
 	if (i!=a-1) {
 		printf ("%d ",b[i]);
	}
	 else {
	printf ("%d\n",b[i]);
	}
return 0;
 }
