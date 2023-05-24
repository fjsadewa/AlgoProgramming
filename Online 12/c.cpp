#include <stdio.h>
int main(){
int Testcase;
scanf("%d",&Testcase);
for(int k=1;k<=Testcase;k++){
  long long int i,j;
  long long int n,t, mid;
  double sum=0,median,mean;
    scanf("%lld", &n);
    double A[n];
    for(i=1; i<=n; i++){
  scanf("%lf", &A[i]);
  sum += A[i];
    }
    for(i=1; i<=(n-1); i++)
    {
        for(j=n; j>=(i+1); j--)
        {
            if(A[j-1]>A[j])
            {
                t=A[j-1];
                A[j-1] = A[j];
                A[j] = t;
            }
        }
    }
    mid=(n+1)/2;
    if(n%2==0){
     median= (A[mid+1] + A[mid])/2;
 }
    else median= A[mid];
    mean= sum/n;
    printf("Case #%d:\n",k);
    printf("Mean : %.2lf\n", mean);
    printf("Median : %.2lf\n",median);
 }
    return 0;
}
