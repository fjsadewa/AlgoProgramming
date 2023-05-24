#include <stdio.h>
#include <math.h>

int main (){
	int a,b;
	printf ("Input two angles of triangle separated by coma :");
	scanf("%d, %d",&a,&b);
	printf ("Third angel of triangel: %d ",180-(a+b));
	return 0;
	
}
