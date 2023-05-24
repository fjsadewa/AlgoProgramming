#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a[5][5],b1,b2,k1,k2,c,ans;
    int i,j;
    srand (time(0));
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            a[i][j] = rand() %101;
            printf ("a[%d][%d]= %d\t",i,j,a[i][j]);
        }
        printf("\n");
    }

    b1 = rand()%5;
    k1 = rand()%5;
    b2 = rand()%5;
    k2 = rand()%5;

    c = a[b1][k1] * a[b2][k2];
    printf("What is the result of a[%d][%d] times a[%d][%d] ?",b1,k1,b2,k2);
    scanf("%d",&ans);
    if (ans==c){
        printf("\nYou Are Brilliant");
        }else{
            printf("\nYou Are Wrong");
        }

    return 0;
}

