#include<stdio.h>
int main()
{
 int n,t,i;
 scanf("%d",&t);
 for(i=0;i<=t;i++)
 {
  printf("%d",t);
  printf("case #%d\n",i+1);
  for(int r = t; r> 0; r--)
  {
   if(r==60)
   {
   printf("60 SECOND TILL NEW YEAR\n");
  }
  else if(r==30)
  {
   printf("30 SECOND TILL NEW YEAR\n");
  }
  else if(r==10)
  {
   printf("10 SECOND TILL NEW YEAR\n");
  }
  else if (r==5)
  {
   printf("5 SECOND TILL NEW YEAR\n");
  }
  else if (r==t)
  {
   printf ("%d SECOND TILL NEY YEAR\n");
  }
  else 
  {
   printf("%d",r);
  }
  }
 }
 
}
