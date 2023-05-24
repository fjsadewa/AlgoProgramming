#include <stdio.h>
#include <math.h>

int main () {
	double a,b,c,d,e,f,g,h;
	double h1,h2,h3,h4;
	scanf("%lf %lf",&a,&b);
	h1 = b /((100 -a)/100);
	scanf("%lf %lf\n",&c,&d);
	h2 = d/((100 -c)/100);
	scanf("%lf %lf\n",&e,&f);
	h3 = f/((100 -e)/100);
	scanf("%lf %lf",&g,&h);
	h4 = h/((100 -g)/100);
	
	printf("$%.2lf\n",h1);
	printf("$%.2lf\n",h2);
	printf("$%.2lf\n",h3);
	printf("$%.2lf\n",h4);	
	return 0;	
}
