#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,hari,teman,a,b,ttl,k,j,i;

    scanf("%d",&n);
    int awal[n];
    for(i=1; i<=n; i++){
        scanf("%d",&awal[i]);
   }
   scanf("%d",&teman);
   for(j=1; j<=teman; j++){
        ttl = 0;
        scanf("%d %d",&a,&b);
        for(k=a; k<=b; k++){
            ttl = ttl + awal[k];
        }
        printf("Case #%d: %d\n",j,ttl);
     }


    return 0;
}
