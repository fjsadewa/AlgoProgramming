#include <stdio.h>

int main(){
 int n, i;
 long long int x, y, sum = 0;
 scanf("%d %lld %lld", &n, &x, &y);
 long long int a[n];
 for(i=0; i<n; i++){
  scanf("%lld", &a[i]);
 }
 for(i=0; i<n; i++){
  if(a[i]%2==0){
   a[i] = a[i] * y;
  }else{
   a[i] = a[i] * x;
  }
  sum += a[i];
 }
 printf("%lld\n", sum);
 return 0;
}
