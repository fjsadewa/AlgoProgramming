#include <stdio.h>

int main()
{
    int T,N,M;
    FILE *testdata = fopen("testdata.in","r");

    fscanf(testdata,"%d", &T);

    for(int i=0;i<T;i++)
    {
        fscanf(testdata,"%d %d",&N,&M);

        char matrix[N][M];

        for(int j=0;j<N;j++)
        {
            fgetc(testdata);
            fscanf(testdata,"%[^\n]",matrix[j]);

        }

        int a=0,b=0,c,d,e,f;

        while(matrix[b][a]=='.')
        {
            a++;
            if(a>=M)
            {
                b++;
                a=0;
            }
        }

        c=a;
        d=b;
        e=a;
        f=b;

        while(b<N)
        {
            while(a<M)
            {
                if(matrix[b][a]!='.')
                {
                    if(a<c)
                    {
                        c=a;
                    }
                    if(a>e)
                    {
                        e=a;
                    }
                    if(b<d)
                    {
                        d=b;
                    }
                    if(b>f)
                    {
                        f=b;
                    }
                }
                a++;
            }
            b++;
            a=0;
        }

        printf("Case #%d:\n",i+1);
        printf("%d %d\n",f-d+1,e-c+1);
        for(int j=d;j<=f;j++)
        {
            for(int k=c;k<=e;k++)
            {
                printf("%c",matrix[j][k]);
            }
            puts("");
        }
    }

    return 0;
}
