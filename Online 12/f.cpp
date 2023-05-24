#include<stdio.h>

int main() {
 long long int Testcase, i, j, angka, k, hasil, temp;
 scanf("%lld", &Testcase);
 for (i=1;i<=Testcase;i++) {
  scanf("%lld", &angka);
  long long int a[angka],b[angka];
  for (j=0;j<angka;j++) {
   scanf("%lld", &a[j]);
   temp = a[j];
   if (j != 0) {
    for (k=j-1;k>=0;k--) {
     if (temp < a[k]) {
      a[k+1] = a[k];
      a[k] = temp;
      }
      else {
       break;
     }
    }
   }
  }
  for (j=0;j<angka;j++) {
   scanf("%lld", &b[j]);
   temp = b[j];
   if (j != 0) {
    for (k=j-1;k>=0;k--) {
     if (temp < b[k]) {
      b[k+1] = b[k];
      b[k] = temp;
      }
      else {
       break;
     }
    }
   }
  }
  hasil = 0;
  j = 0;
  k = angka-1;
  while (j<angka && k>=0) {
   hasil += a[j] * b[k];
   j++;
   k--;
  }
  printf("Case #%lld: %lld\n", i, hasil);
 }
 return 0;
}
