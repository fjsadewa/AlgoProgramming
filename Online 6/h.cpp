#include <stdio.h>

int main (){
 int t, Case, n, x, k;
 long long int fibbonacci [64], sum, temp;
 int kiri, kanan;
 
 for (n = 3; n <= 64; n++ ){
  fibbonacci [n] = 0;
 }
 
 fibbonacci [0] = 0;
 fibbonacci [1] = 1;
 
 for (n = 2; n <= 64; n++){
  fibbonacci [n] = fibbonacci [n - 1] + fibbonacci [n - 2];
 }
 scanf ("%d", &t);
 for (Case = 1; Case <= t;Case ++){
  sum = 0;
  scanf ("%d %d", &kiri, &kanan); 
  for (x = kiri; x <= kanan; x ++){
   if (fibbonacci [x] > 9){
    temp = fibbonacci [x];
    while (temp != 0){
     sum += temp % 10;
     temp /= 10;
    }
   } 
   else {
    sum += fibbonacci [x];
   }
  } 
  
  printf ("Case #%d: %lld\n", Case, sum);
 }
 return 0;
}
