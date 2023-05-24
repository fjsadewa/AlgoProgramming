#include<stdio.h>

int main(){
 int t,b,x,i;
 scanf("%d",&t);
 int a[t];
 for(i=0;i<t;i++){
  scanf("%d",&a[i]);
  if(a[i]==1){
   if(a[i-1] != 0){
   printf("%d ",a[i-1]);
   }
  }
     }
printf("%d\n",a[t-1]);
return 0;
}
