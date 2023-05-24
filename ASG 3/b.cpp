#include <stdio.h>
int main () {
	double t,a,b,c,r1,r2,r3,f1,f2,f3,k1,k2,k3;
	scanf("%lf\n",&t);
	scanf("%lf\n",&a);
	r1=4*a/5;
	f1=(9*a/5)+32;
	k1=a+273;
	scanf("%lf\n",&b);
	r2=4*b/5;
	f2=(9*b/5)+32;
	k2=b+273;
	scanf("%lf",&c);
	r3=4*c/5;
	f3=(9/5*c)+32;
	k3=c+273;
	printf ("%.2lf %.2lf %.2lf\n",r1,f1,k1);
	printf ("%.2lf %.2lf %.2lf\n",r2,f2,k2);
	printf ("%.2lf %.2lf %.2lf\n",r3,f3,k3);
	
	return 0;	
}
