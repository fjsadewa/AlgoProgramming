#include <stdio.h>

int sum;
int arr(int a) {
    sum += a;
}

int main() {
    int Testcase,N,total,A;
    scanf("%d",&Testcase);
    for(int i = 1;i <=Testcase;i++){
        scanf("%d",&N);
        sum = 0;
        for( int j = 1;j <= N;j++)
        {
            scanf("%d",&A);
            total = arr(A);
        }
    printf("Case #%d: %d\n",i,sum);
    }
    return 0;
}
