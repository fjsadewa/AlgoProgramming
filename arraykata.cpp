#include <stdio.h>
#include <string.h>
int main()
{
	char kata[30];
	printf("Masukan kata :");
	scanf("%[^\n]",kata);
	int c;
	c=strlen(kata);
	printf("%d",c);
}

