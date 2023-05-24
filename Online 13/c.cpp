#include <stdio.h>
#include <string.h>

struct siswa
{
	char D[100];
	char M[20]; 
};

struct cari
{
	char S[10]; 
};

int main()
{
	int cek;
	FILE *fp;
	fp = fopen("testdata.in","r");
	if (fp== NULL ) {
		printf ("File tidak bisa dibuka\n");
	} 
	int N,T,i,j;
	fscanf(fp,"%d",&N);
	struct siswa data[N];
	for (i=0;i<N;i++)
	{
		fscanf(fp,"%s %s",data[i].D,data[i].M);
		fprintf(fp,"%s %s\n",data[i].D,data[i].M);
	}
	
	fscanf(fp,"%d",&T);
	struct cari no[T];
	for (i=0;i<T;i++)
	{
		fscanf(fp,"%s",no[i].S);
	}
	for (i=0;i<T;i++)
	{	cek=0;
		for (j=0;j<N;j++)
		{	cek++;
			if (strcmp(no[i].S,data[j].D) == 0)
			{
				printf("Case #%d: %s\n",i+1,data[j].M);
				break;
			}
			else if (cek == T)
			{
				printf("Case #%d: N/A\n",i+1);
			}
		}
	}
	fclose(fp);
	return 0;
}
