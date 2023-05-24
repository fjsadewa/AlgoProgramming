#include<stdio.h>
#include<math.h>

int main(){
        long long int v,i,a,n,hasil;
            scanf("%lld",&v);
        for(i=1;i<=v;i++){
            scanf("%lld %lld",&a,&n);
            hasil = pow(2,a*n);
            printf("Case #%lld: %lld\n",i,hasil);
 }
 return 0;
}

