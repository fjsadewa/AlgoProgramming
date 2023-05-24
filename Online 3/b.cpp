#include <stdio.h>


int main()
{

    double l,b,h,hasil;

    scanf("%lf %lf %lf",&l,&b,&h);
    hasil = (b*h)+(3*l*b);
    printf("%.3lf\n", hasil);
    return 0;
}
