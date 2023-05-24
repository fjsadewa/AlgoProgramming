#include <stdio.h>
#include <stdlib.h>

int main()
{
    double t,a,b,hasil1,hasil2,hasil3;

    scanf("%lf\n",&t);
    scanf("%lf %lf\n",&a,&b);
    hasil1 = (a*b)/360;
    scanf("%lf %lf\n",&a,&b);
    hasil2 = (a*b)/360;
    scanf("%lf %lf",&a,&b);
    hasil3 = (a*b)/360;
    printf("%.2lf\n",hasil1);
    printf("%.2lf\n",hasil2);
    printf("%.2lf\n",hasil3);
    return 0;
}
