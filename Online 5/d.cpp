#include <stdio.h>

int main (){
 int T, N, i, j;
 
 scanf ("%d", &T);
 
 for (i=1;i<=T;i++){
  scanf ("%d", &N);
  int array [N];
  for (j=1;j<=N;j++){
   scanf ("%d", &array[j]);
  }
  printf ("Case #%d:", i);
  while (N>0){
   printf (" %d %d", array[N-1], array[N]);
   N=N-2;
  }
  printf ("\n"); 
 }
 
 return 0;
}
