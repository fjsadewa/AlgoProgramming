#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b,c,d,e,f,g,h,i,j,k,l,t1,t2,t3;
    char kurungki,kurungka;
    kurungki = '(';
    kurungka = ')';


    scanf("%c%lld+%lld%c x %c%lld -%lld%c\n",&kurungki,&a,&b,&kurungka,&kurungki,&c,&d,&kurungka);
    t1 = (a+b)*(c-d);
    scanf("%c%lld+%lld%c x %c%lld -%lld%c\n",&kurungki,&e,&f,&kurungka,&kurungki,&g,&h,&kurungka);
    t2 = (e+f)*(g-h);
    scanf("%c%lld+%lld%c x %c%lld -%lld%c",&kurungki,&i,&j,&kurungka,&kurungki,&k,&l,&kurungka);
    t3 = (i+j)*(k-l);


    printf("%lld %lld %lld\n",t1,t2,t3);
    return 0;
}
