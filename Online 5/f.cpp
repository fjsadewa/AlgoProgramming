#include<stdio.h>

long long int fact(long long int hasil2){
 long long int i,hasil=1;
 for(i = hasil2 ; i > hasil2-3 ; i--){
  hasil *= i;
//  printf("i: %lld, hasil: %lld\n", i, hasil);
  }
  return hasil/6;
}
int main(){
 long long int T,b,N,i,j,k,hasil=1,hasil2,sum1,total = 0;
 scanf("%lld",&T);
 for(i=1;i<=T;i++){
  scanf("%lld",&N);
  long long int a[N];
  for(j=0;j<N;j++){
   scanf("%lld",&a[j]);
   }
    long long int count[1001] = {0};
  for(j = 0 ; j < N ; j++) {
   ++count[a[j]]; 
  }
  for(j=0;j<=1000;j++){
   if(count[j]>=3){
//  printf("Count: %lld\n", count[j]);
    hasil2 = count[j];
    sum1=fact(hasil2);
//    printf("sum: %lld\n", sum1);
    total+=sum1;
   }
  }
  printf("Case #%d: %lld\n", i, total);
  total = 0;
}
 return 0;
}
