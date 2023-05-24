#include <stdio.h>

int main () {
	char a,b,c,d,e,f,g,h,i;
	scanf ("%c %c %c\n",&a,&b,&c);
	scanf ("%c %c %c\n",&d,&e,&f);
	scanf ("%c %c %c",&g,&h,&i);
	
	printf ("  %c\n",a);
	printf (" %c %c\n",d,b);
	printf ("%c %c %c\n",g,e,c);
	printf (" %c %c\n",h,f);
	printf ("  %c\n",i);
return 0;
}
