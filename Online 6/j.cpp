#include<stdio.h>
int main(){
 long long int T,i,j,s,y;
 
 scanf("%lld",&T);
 for(i=1;i<=T;i++){
 long long int a,b,c,l,r;
  scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&l,&r);
  
  long long int r1,r2,r3,r4;
  
 
        long long int temp = a;
  while(temp % b != 0 || temp % c != 0) { 
   temp += a;
  }
 
  r1=r/temp;
        r2=(l-1)/temp;
        r4=temp*(r1*(r1+1)/2 - (r2*(r2+1)/2));
  printf("Case #%lld: %lld\n",i,r4);
 }
  return 0;
 }
