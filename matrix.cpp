#include <stdio.h>
#include <string.h>
#include <time.h>


int main()
{
  int m[5][5];
  srand(time(NULL));
    for (int i = 0 ; i < 5; i++){
        for(int j = 0; j < 5; j++){
            m[i][j]= rand() % 101;
        }

    }

    printf("Guess Multiplication Random Matrix\n");
    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("[%d] [%d] %d\t",i,j,m[i][j]);
        }
        printf("\n");
    }

int a,b,c,d,jawaban;
 a=rand()%5;
 b=rand()%5;
 c=rand()%5;
 d=rand()%5;
 printf("What is the result pf angka [%d][%d] times angka[%d][%d] ?",a,b,c,d);
 scanf("%d",&jawaban);
 if(jawaban==m[a][b]*m[c][d]){
  printf("You Are Brilliant\n");
 }
 else{
  printf("You Are Wrong\n");
 }


    return 0;
}
