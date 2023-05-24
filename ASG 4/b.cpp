#include<stdio.h>

int main()
{
 int T,i,A,B;
 scanf("%d",&T);
 for(i=1;i<=T;i++)
 {
     scanf("%d %d",&A,&B); 
      int jaw = A;
     while(A>=B)
  { 
         A -= B;
         jaw += 1;
         A += 1;
     }
     printf("Case #%d: %d\n",i,jaw);
    }
 return 0;
}
