#include <stdio.h>

int main(){
	long long int g, testcase;
	long long int x;
	scanf("%lld", &testcase);
	for(g=1; g<=testcase; g++){
		long long int n;
		scanf("%lld", &n);
		long long int a[n], b[n], total = 0, temp = 0;
		for(x=0; x<n; x++){
			scanf("%lld %lld", &a[x], &b[x]);
		}
		if(n == 1){
			total = 1;
		}else if(n == 2){
			temp = b[0];
			if(a[1] < temp){
				total += 0;
			}
			else{
				total += 2;
			}
		}
		else{
			temp = b[0];
			for(x=1; x<n; x++){
				if(x == 1){
					if(a[x] >= temp && b[x] <= a[x+1]){
						total += 2;
					}else if(a[x] >= temp && b[x]>a[x+1]){
						total += 1;
					}else{
						total += 0;
					}
					if(b[x] >= temp){
						temp = b[x];
					}
				}
else if(x < n-1){
if(a[x] < temp || b[x] > a[x+1]){
total += 0;
if(b[x] >= temp){
temp = b[x];
	}
	}
else if(a[x] >= temp && b[x] <= a[x+1]){
						total += 1;
						if(temp <= b[x]){
							temp = b[x];
						}
					}
				}
				else if(x == n-1){
					if(a[x] >= temp){
						total += 1;
					}else{
						total += 0;
					}
				}
			}
		}
		printf("Case #%lld: %lld\n", g, total);
	}
	return 0;
}
