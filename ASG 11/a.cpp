#include<stdio.h>

int main (){

int a,b;
FILE *ptr;
 ptr = fopen ("testdata.in","r");
 fscanf (ptr, "%d %d", &a,&b);
printf ("%d\n",a+b);
fclose(ptr);
return 0;

}

