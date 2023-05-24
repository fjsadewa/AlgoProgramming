#include<stdio.h>
int main()
{
 int i,t;
 scanf("%d",&t);
 int n[t],a,b,c;
 for(i=1;i<=t;i++)
 {
  scanf("%d",&n[i]);
  printf("Case #%d:\n",i);
  if(n[i]%2==0)
  {
   for(a=1;a<=n[i];a++)
   {
     for(b=a;b<n[i];b++)
     printf(" ");
     for(c=1;c<=a;c++)
     if(c%2==0)
    {
      printf("*");
    }
    else
    {
     printf("#");
    }
    printf("\n"); 
   }
  }
  else
   {
    for(a=1;a<=n[i];a++)
   {
     for(b=a;b<n[i];b++)
     printf(" ");
     for(c=1;c<=a;c++)
     if(c%2==0)
    {
      printf("#");
    }
    else
    {
     printf("*");
    }
    printf("\n");
   }
   }
 }
}
