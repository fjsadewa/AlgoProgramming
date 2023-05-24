#include <stdio.h>

int main (){
	long long int n,s,t,p,l,h1,h2,h3,ha;
	scanf ("%lld %lld %lld %lld %lld",&n,&s,&p,&l,&t);
	h1 = p/s;
	h2 = l/s;
	h3 = t/s;
	ha = n/(h1*h2*h3);
	if (n%(h1*h2*h3)>0) {
		ha= ha+1;
	}
		printf ("%lld\n",ha);
return 0;
}
