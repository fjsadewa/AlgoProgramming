#include <stdio.h>


int main()
{
    int n,s,a,b,c,hasil;
    scanf("%d %d %d %d %d",&n,&s,&a,&b,&c);
    a = a/s;
    b = b/s;
    c = c/s;

    hasil = n/(a*b*c);
    if (n%(a*b*c)>0){
        hasil = hasil + 1;
    }
    printf("%d\n",hasil);
    return 0;
}
