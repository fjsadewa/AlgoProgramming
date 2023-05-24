#include <stdio.h>
int main (){
int a;
     printf("Pilih 1,2 atau 3:");
    scanf("%d", &a);
    switch (a)
{
    case 1: printf("Congratz! You get a holiday to Singapore\n");
    break;
    case 2: printf("Congratz! You get a holiday to Sydney\n");
    break;
    case 3: printf("Congratz! You get a holiday to Japan\n");
    break;
    default: printf("Salah WOI! Sudah dibaca belum tulisannya!\n");
}
    return 0;
}

