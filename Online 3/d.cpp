#include<stdio.h>
int main(){
 int a,b,c,d;
 scanf("%d %d %d %d",&a,&b,&c,&d);
 int hasil=(a+b+c)-(a+d);
 int hasil2=(a+b+c)-(c+d);
 int hasil3=(a+b+c)-(b+hasil2);
 int hasil4=(a+b+c)-(a+hasil3);
 int hasil5=(a+b+c)-(c+hasil4);
 printf("%d %d %d\n",a,hasil,d);
 printf("%d %d %d\n",hasil3,b,hasil2);
 printf("%d %d %d\n",hasil4,hasil5,c);
 return 0;
}
