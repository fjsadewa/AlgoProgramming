#include<stdio.h>
int main(){
 int t,a,b,i,j;
 long long int temp=0,temp2=0;
 scanf("%d",&t);
 for(i=0;i<t;i++){
  temp=0,temp2=0;
  scanf("%d",&a);
  for(j=0;j<a;j++){
   scanf("%d",&b);
      temp+=b;
            if (temp<0){
            temp2+= -temp;
            temp = 0;
  }
 }
 printf("Case #%d: %lld\n",i+1,temp2+1);
}
 return 0;
}
