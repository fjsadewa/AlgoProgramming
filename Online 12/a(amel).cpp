#include <stdio.h>
#include <string.h>

typedef struct
{
	char S[50];
	int A;
}data;

void tukar(data *P1,data *P2)
{
	data temp = *P1;
	*P1 = *P2;
	*P2 = temp;
}

void urut(data arr[],int N) 
{
	int i,j,max;
	for (i=1;i<N;i++) 
	{
		max = i;
		for (j =i+1;j<=N;j++) 
			if (arr[max].A < arr[j].A) 
			{
			     	max = j;
			}
			else if(arr[max].A == arr[j].A)
			{
				if(strcmp(arr[max].S,arr[j].S) > 0) 
				{
				    max = j;
				}
			}
			if (max > i) 
			{
				tukar(&arr[i],&arr[max]);
			}
	}
} 

int main()
{
	int T,N,i,j,temp;
	scanf("%d",&T);
	for (j=0;j<T;j++)
	{
		scanf("%d",&N);
		data D[N+3];
		for (i=1;i<=N;i++)
		{
			scanf("%[^#]#%d",&D[i].S,&D[i].A);
		}
		urut(D,N);
		printf("Case #%d: ",j+1);
		for (i=1;i<=N;i++)
		{
			printf("%s - %d\n",D[i].S,D[i].A);
		}
	}
	
	return 0;
}

