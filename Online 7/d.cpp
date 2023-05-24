#include<stdio.h>

int max;
void A(int x,int l){
 if(x<=l){
  int a,b,c;
  a=3*x;
  A(a,l);
  if(a>max && a<=l) max=a;
  b=4*x;
  A(b,l);
  if(b>max && b<=l) max=b;
  c=5*x;
  A(c,l);
  if(c>max && c<=l) max=c;
 }
}

int main(){
 long long int T,x,l;
 scanf("%lld",&T);
 for(int i=1;i<=T;i++){
  scanf("%lld %lld",&x,&l);
  max=0;
  A(x,l);
  printf("Case #%d: %d\n",i,max);
 }
 return 0;
}
