#include <stdio.h>
int b;
int f(int n)
{
	if (n==3 || n==4)
	{
		b++;
	}
	if (n==0)
	{
		return 1;
	}
	else if (n==1)
	{
		return 2;
	}
	else if (n%3==0)
	{
		return f(n-n/3) + 1;
	}
	else 
	{
		return f(n-1) + n + f(n-2) + 1;
	}
}

int main()
{
	int T,n,a;
	scanf("%d",&T);
	for (int j=0;j<T;j++)
	{
		b=0;
		scanf("%d",&n);
		a=f(n);
		printf("Case #%d: %d %d\n",j+1,a,b);
	}
	return 0;
}
