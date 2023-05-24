#include <stdio.h>

int main(){
 int t=0;
 scanf ("%d",&t);
 while (t>0){
  if ((t%5==0)&&(t!=0)){
   printf("%d SECONDS TILL NEW YEAR!!\n",t);
   t=t-1;
  }
  else {
  printf ("%d\n",t);
  t=t-1;
  }
 }
 return 0;
}
