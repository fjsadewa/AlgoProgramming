#include <stdio.h>

int main () {
	int a,b,c,d;
	int e,f,g,h,i;
	scanf ("%d %d %d %d",&a,&b,&c,&d);
	e=15-(a+d);
	f=15-(c+d);
	g=15-(b+f);
	h=15-(e+b);
	i=15-(h+c);
	printf ("%d %d %d\n",a,e,d);
	printf ("%d %d %d\n",g,b,f);
	printf ("%d %d %d\n",i,h,c);
}
// lebih bagus algoritma yang asli
