#include <stdio.h>

int main (){
	int start=0,step=0,stop=0;
	printf("Enter three integer:");
	scanf ("%d",&start);
	scanf ("%d",&step);
	scanf ("%d",&stop);
	printf("Output :");
	printf("\n%d",start);
	
	while (start< stop){
		start=start+step;
		printf("%d", start," ");
	}
	return 0;
}
