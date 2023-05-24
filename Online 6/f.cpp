#include <stdio.h>

int main()
{
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	long long int a[n][m], total[m], hasil;
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			scanf("%lld", &a[i][j]);
		}
	}
	for (j=0;j<m;j++)
	{
		total[j] = 0;
		for (i=0;i<n;i++)
		{
			total[j] += a[i][j];
		}
	}
	hasil = 1;
	for (j=0;j<m;j++)
	{
		if(total[j] > 1000000007)
		{
			total[j] = total[j]%1000000007;
		}
		hasil = hasil * total[j];
		if(hasil > 1000000007)
		{
			hasil = hasil%1000000007;
		}
	}
	
	printf("%lld\n", hasil);
	return 0;
}
