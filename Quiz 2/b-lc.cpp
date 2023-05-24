#include<stdio.h>

int main(){
    int a, b, large, total = 0,k,i,j,l;
    scanf("%d %d", &a, &b);
    for( i=1; i<=a; i++){
        for(j=1; j<=b; j++){
            for( k=i; k<=a; k++){
                for( l=j; l<=b; l++){
                    total += 1;
                }
            }
        }
    }
    printf("%d\n", total);
    return 0;
}
