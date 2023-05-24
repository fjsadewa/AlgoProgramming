#include <stdio.h>

int main() {
 long long int t, x, n, temp, y;
 scanf ("%d", &t);
 for (x=0; x<t; x++) {
  scanf ("%lld", &n);
  long long int a[t], no1=-1000000, no2=-1000000;
  
  for (y=1; y<=n; y++) {
   scanf ("%lld ", &a[x]);
   if (a[x]>no2) {
    no2=a[x];
    if (no2>no1) {
     temp=no1; no1=no2; no2=temp;
    }
   }
  }
  printf ("Case #%lld: %lld\n", x+1, no1+no2);
 }
 return 0;
}
