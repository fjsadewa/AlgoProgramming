#include<stdio.h>
#include<math.h>
int main()
{
	int i,t;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		int a,b,y,x,j;
		y=0;x=0;
		scanf("%d %d",&a,&b);
		for(j=a;j<=b;j++)
		{
			x=pow(2,j-1);
			y=y+x;
		}
		printf("Case #%d: %d\n",i,y);
	}
}
