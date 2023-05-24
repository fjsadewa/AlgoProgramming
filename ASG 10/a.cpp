#include <stdio.h>
#include <string.h>

struct birthday
{
    char S[10001];
    char D[10001];
    long long int A;
};

struct shop
{
    char T[10001];
};

int main()
{
    int T,N,M,Q,i,j,k;
    
    scanf("%d",&T);
    for (k=0;k<T;k++)
    {
        scanf("%d %d",&N,&M);
        struct birthday cust[N];
        for (i=0;i<N;i++)
        {
            scanf("%s %s %lld",&cust[i].S,&cust[i].D,&cust[i].A);
        }
    
        scanf("%d",&Q);
        struct shop open[Q];
        for(j=0;j<Q;j++)
        {
            scanf("%s",&open[j].T);
        }
        
        printf("Case #%d:\n",k+1);
        for (j=0;j<Q;j++)
        {
            int X = 0;
            for (i=0;i<N;i++)
            {
                if ((strcmp(open[j].T,cust[i].D) == 0) && (cust[i].A >= M))
                {
                    X = 1;
                    printf("%s\n",cust[i].S);
                }
            }
            if (X == 0)
            {
                printf("No one\n");
            }
        }
    }
    
    return 0;
}
