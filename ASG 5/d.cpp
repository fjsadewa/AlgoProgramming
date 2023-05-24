#include <stdio.h>
int main()
{
 long long int N,i,max,max2;
 scanf("%lld",&N);
 int A[N];
 for (i=0;i<N;i++)
 {
  scanf("%lld",&A[i]);
 }
 max = max2 = A[0];
 for (i=1;i<=N;i++)
 {
  if (max<A[i])
  {
   max2 = max;
   max = A[i];
  }
  else if (max2<A[i] && A[i]<max)
  {
   max2 = A[i];
  }
 }
 printf("%lld\n",max2);
 
 return 0;
}
