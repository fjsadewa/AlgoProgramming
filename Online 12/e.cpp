#include <stdio.h>

int main() {
 int Testcase, angka, i, j, k;
 scanf("%d", &Testcase);
 for (i=1;i<=Testcase;i++) {
  scanf("%d", &angka);
  long long int a[angka], b[angka], temp, c, Testcase, count;
  c=1;
  for (j=0;j<angka;j++) {
   scanf("%lld", &a[j]);
   if (j != 0) {
    count = 0;
    for (k=0;k<c;k++) {
     if (b[k] == a[j]) {
      count = 1;
      break;
     }
    }
    if (count == 0) {
     b[c] = a[j];
     c++;
    }
   }
   else {
    b[j] = a[j];
   }
  }

  for (j=0;j<c-1;j++) {
   temp = b[j];
   Testcase = j;
   for (k=j+1;k<c;k++) {
    if (b[k] < temp) {
     temp = b[k];
     Testcase = k;
    }
   }
   if (Testcase != j) {
    b[Testcase] = b[j];
    b[j] = temp;
   }
  }

  printf("Case #%d:",i);
  for (j=0;j<angka;j++) {
   for (k=0;k<c;k++) {
    if (a[j] == b[k]) {
     printf(" %d", k+1);
     break;
    }
   }
  }
  printf("\n");
 }
}
