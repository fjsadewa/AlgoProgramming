#include<stdio.h> 
  
long long int factor(long long int n) 
{ 
    long long int f = 1; 
    if (n==0||n==1) 
        return 1; 
    for (long long int i=2; i<=n; i++) 
        f = f*i; 
    return f; 
} 
  
long long int getSum(long long int a[], long long int N) 
{  
    long long int fact = factor(N); 
    long long int digitsum = 0; 
    for (long long int i=0; i<N; i++) 
        digitsum += a[i]; 
    digitsum *= (fact/N);  
    long long int hsl = 0; 
    for (long long int i=1, k=1; i<=N; i++) 
    { 
        hsl  += (k*digitsum); 
        k = k*10; 
    } 
    return hsl; 
} 

int main() 
{
	long long int T;
	scanf("%lld", &T);
	for(long long int i=1; i<=T; i++){
		long long int b;
		scanf("%lld", &b);
    	long long int a[b];
		for(long long int j=0; j<b; j++){
			scanf("%lld", &a[j]);
		}
    	long long int N = sizeof(a)/sizeof(a[0]); 
    	printf("Case #%lld: %lld\n", i, getSum(a, N)); 
	}
    return 0; 
}
