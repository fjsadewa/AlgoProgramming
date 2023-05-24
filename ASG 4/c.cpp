#include <stdio.h>
#include <stdlib.h>
#include <math.h>

   int main(){

    int testcase;
    long long int n,k;
    scanf("%d",&testcase);

    for(int i=1; i<=testcase; i++){

        scanf("%lld %lld",&n,&k);
        long long temp = k;
        int c = 0;
        while(temp<=n){
            temp*=k;
            c++;
        }

        printf("Case #%d: %d\n",i,c);
    }


return 0;
   }
