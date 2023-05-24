#include <stdio.h>
#include <math.h>

int main (){
	int a;
	scanf("%d",&a);
	printf("Years:%d\n",a/365);
	printf("weeks:%d\n",(a% 365)/7);
	printf("Days:%d\n",a);
	return 0;
}
