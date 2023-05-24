#include <stdio.h>

int main (){
 int x, y, i, j;
 scanf ("%d %d", &y, &x);
 for (i=0;i<y;++i){
  for (j=0;j<y;++j){
   printf("#");
  }
  printf ("\n");
 }
 printf ("\n");

 for (i=1;i<=y;i++){
  for (j=1;j<=y;j++){
   if (i%x==0){
    printf("#");
   } else {
    printf(".");
   }
  }
  printf ("\n");
 }
 printf ("\n");

 for (i=1;i<=y;i++){
  for (j=1;j<=y;j++){
   if (j%x==0){
    printf("#");
   } else {
    printf(".");
   }
  }
  printf ("\n");
 }

 return 0;
}
