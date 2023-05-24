#include<stdio.h>

int main()
{
 int x, j, t;
 scanf("%d", &t);
 for(x=1; x<=t; x++){
  long long int n;
  scanf("%lld", &n);
  long long int a[n], max = 0, jump = 0, selisih = 0;
  for(j=0; j<n; j++){
   scanf("%lld", &a[j]);
   if(j>0){
    if(a[j]-a[j-1] > max){
     max = a[j] - a[j-1];
    }
   }
  }
  long long int start = a[0];
  for(j=1; j<n; j++){
   selisih = a[j] - start;
   if(j == n-1 && selisih < max){
    jump++;
   }
   if(selisih == max){
    jump++;
    start = a[j];
   }else if(selisih > max){
    jump++;
    j -= 1;
    start = a[j];
   }
  }
  printf("Case #%d: %lld %lld\n", x, max, jump);
 }
 return 0;
}
