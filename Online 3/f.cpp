#include <stdio.h>
#include <math.h>
#define pi 3.14159265359
int main(){
    double a,b,c,d,e,f;
    scanf("%lf %lf %lf",&a,&b,&c);
    d=sqrt((a*a)+(b*b));
    e=sqrt((d*d)+(c*c));
    f=e*e* pi ;
    printf("%.2lf\n",f);
    return 0;
}
