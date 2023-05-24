#include <stdio.h>

int main(){
 int i, j, k, t, x;
 scanf("%d", &t);
 for(i=0; i<t; i++){
  scanf("%d", &x);
  long long int a[x][x], sum[x], temp = 0;
  for(j=0; j<x; j++){
   for(k=0; k<x; k++){
    scanf("%lld", &a[j][k]);
   }
  }
  for(j=0; j<x; j++){
   for(k=0; k<x; k++){
    temp += a[k][j];
   }
   sum[j] = temp;
   temp = 0;
  }
  printf("Case #%d: ", i+1);
  for(j=0; j<x; j++){
   if(j == (x-1)){
    printf("%lld\n", sum[j]);
   }else{
    printf("%lld ", sum[j]);
   }
  }
 }
 return 0;
}
