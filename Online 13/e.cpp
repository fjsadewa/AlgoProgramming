#include <stdio.h>
int main()
{
    int T,a,b,c,i,j,k,l;
    long long int A[1000],B[1000],C[1000],K;
    scanf("%d",&T);
    for (i=0;i<T;i++)
	{
		int X = 0;
        scanf("%d",&a);
        for (j=0;j<a;j++)
		{
            scanf("%lld",&A[j]);
        }
        scanf("%d",&b);
        for (j=0;j<b;j++)
		{
            scanf("%lld",&B[j]);
        }
        scanf("%d",&c);
        for (j=0;j<c;j++)
		{
            scanf("%lld",&C[j]);
        }
        scanf("%lld",&K);
        for (j=0;j<a;j++)
		{
            for (k=0;k<b;k++)
			{
                for (l=0;l<c;l++)
				{
                    if (A[j] + B[k] + C[l] == K)
					{
                        X++;
                    }
                }
            }
        }
        printf("Case #%d: %d\n",i+1,X);
    }

    return 0;
}
