
#include<stdio.h>


int main(){
	long long int n,m;
    scanf("%lld %lld",&n,&m);
	long long int arr[n+2],total[n+2];
			total[0]=0;
    for(int i=1; i<=n; i++){
    	scanf("%lld",&arr[i]);
    	if(i<=2){
    		total[i]=arr[i];
		}
		else{
			total[i]=arr[i]+total[i-2];
		}
    }
	long long int l,r,ganjil,genap;
    	for(int i=1; i<=m; i++){
    		scanf("%lld %lld",&l,&r);
    		genap=0;
    		ganjil=0;
    		long long int jml,left,right,x;
    		if(l==r){
    			if(r%2==0){
    				jml=arr[l]-0;
				}
				else{
					jml=0-arr[l];
				}
			}
			else{
				if(l+1>r){
					left=0;
				}
				else{
					left=total[l+1];
				}
				if(r-1<1){
					right=0;
				}
				else {
					right=total[r-1];
					x=arr[l+1];
				}
				if(r%2==0){
					if(l%2==0){
						genap=arr[l]+(total[r]-total[l]);
						ganjil=x+(right-left);
					}
					else{
						genap=x+(total[r]-left);
						ganjil=arr[l]+(right-total[l]);
					}
				}
				else{
					if(l%2==0){
						genap=arr[l]+(right-total[l]);
						ganjil=x+(total[r]-left);
					}
					else{
						genap=x+(right-left);
						ganjil=arr[l]+(total[r]-total[l]);
					}
				}
				jml=genap-ganjil;
			}

		printf("%lld\n",jml);
}
	return 0;
}

