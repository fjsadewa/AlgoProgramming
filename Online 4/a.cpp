#include <stdio.h>

int main (){
	long long int a,b,c,d,l,r;
	scanf ("%lld %lld %lld %lld",&a,&b,&c,&d);
	l=a*b;
	r=c+d;
	if (l>r)
	printf ("True\n");
	else if (l<r)
	printf ("False\n");
	return 0;
}
