#include <stdio.h>
#include <string.h>

int main()
{
	char strp[200][200];
    long long N=0;
    int x=0;
    long long int zz=1;
    
    FILE *fptr;
	fptr=fopen("testdata.in", "r");
    while(!feof(fptr))
    {
        fscanf(fptr, "%[^\n]\n", &strp[x]);
        for(int j=0; j<strlen(strp[x]); j++){
            if(strp[x][j] == ';' && j == 0)
            {
                N++;
            }
            if(strp[x][j] == ';' && strp[x][j+1] == ';' && j+1<strlen(strp[x])){
                N++;
            }
        }
        x++;
    }
    for(int i=0;i<N;i++){
        zz=zz* 101;
        ;
    }
    printf("%lld\n" ,zz%1000000007);
    return 0;
}
