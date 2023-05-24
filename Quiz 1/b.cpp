#include<stdio.h>

int main(){
    int test,v,i,a;
        scanf("%d",&test);
    for(v = 0; v < test; v++){
        scanf("%d",&a);

  for(i = 0; i < 9;i ++){
    if(i<a){
        printf("#");
    }
    else{
        printf(".");
        }
  }
  printf("\n");
 }
 return 0;
}

