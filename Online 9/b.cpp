#include <stdio.h>

int main() {
 long long int f0,f1,k,d;
 scanf ("%lld %lld",&f0,&f1);
 scanf("%lld",&k);
 for(int i=1;i<=k-1;i++)
 {
  d=f0+f1;
  f0=f1;
  f1=d;
 }
 printf("%lld\n",d);
}
