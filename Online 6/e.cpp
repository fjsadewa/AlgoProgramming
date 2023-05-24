#include<stdio.h>

int main(){
 int T;
 long long int A,B,i;
 scanf("%d",&T);
 
 for(i=1;i<=T;i++){
  scanf("%lld %lld",&A,&B);
  long long int total,temp=0,kelipatan=1;
  while(A>=10 || B>=10){
  long long int satuan1=A%10,satuan2=B%10;
   total=satuan1+satuan2;
   if(total>=10){
    total%=10;
    temp=temp+total*kelipatan;
   }
   else{
    temp=temp+total*kelipatan;
   }
    A/=10;
    B/=10;
    kelipatan*=10;
   }
  long long gab=A+B;
  if(gab>=10){
   gab%=10;
   temp=temp+gab*kelipatan;
   }
  else{
   temp=temp+gab*kelipatan; 
   }
   printf("Case #%d: %lld\n",i,temp);
  }
  return 0;
 }
