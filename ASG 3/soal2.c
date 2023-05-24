#include <stdio.h>

int main()
{
    double a,b,c,d,total1,total2,total3,total4,total5,total6,total7,total8,total9;

    scanf("%lf\n",&a);
    scanf("%lf\n",&b);
    scanf("%lf\n",&c);
    scanf("%lf",&d);


    total1 = (4 * b / 5);
    total2 = (9 * b / 5) + 32;
    total3 = b + 273;

    total4 = (4 * c / 5);
    total5 = (9 * c / 5) + 32;
    total6 = c + 273;

    total7 = (4 * d / 5);
    total8 = (9 * d / 5) + 32;
    total9 = d + 273;
    printf("%.2lf %.2lf %.2lf\n",total1,total2,total3);
    printf("%.2lf %.2lf %.2lf\n",total4,total5,total6);
    printf("%.2lf %.2lf %.2lf\n",total7,total8,total9);
    return 0;
}
