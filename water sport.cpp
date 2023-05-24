#include <stdio.h>
int main (){
	int para,bana,fyfi,snor,jski,bobo,jumlah;
 char nama[50];
 printf("\t\t\t Welcome to Mbois Water Sport\n");
 printf("\t\t\t==================================\n\n");
 printf("Input your name : ");
 scanf("%[^\n]s",nama);
 fflush(stdin);
 printf("\n\nHai %s,\n\n",nama);
 printf(" Water Sport Menu [0 if you dont want to order] : \n\n");
 printf(" 1 round Parasailing $30 : ");
 scanf("%d",&para);
 printf(" 15 minutes Banana boat $25 : ");
 scanf("%d",&bana);
 printf(" 2 round Fly fish $45 : ");
 scanf("%d",&fyfi);
 printf(" 1 hour Snorkeling $45 : ");
 scanf("%d",&snor);
 printf(" 15 minutes Jet ski $35 : ");
 scanf("%d",&jski);
 printf(" 1 hour Glass bottom boat $40 : ");
 scanf("%d",&bobo);
 
 printf("\n\nPurchase List :\n");
 printf(" 1 round Parasailing : %d = $ %d\n",para,para*30);
 printf(" 15 minutes Banana boat : %d = $ %d\n",bana,bana*25);
 printf(" 2 round Fly fish : %d = $ %d\n",fyfi,fyfi*45);
 printf(" 1 hour Snorkeling : %d = $ %d\n",snor,snor*45);
 printf(" 15 minutes Jet ski : %d = $ %d\n",jski,jski*35);
 printf(" 1 hour Glass bottom boat : %d = $ %d\n",bobo,bobo*40);
 jumlah = (para*30)+(bana*25)+(fyfi*45)+(snor*45)+(jski*35)+(bobo*40);
 printf("\nTotal : $ %d \n\n",jumlah);
 
 printf("\n\nThank you for Coming.....");
 getchar();
 return 0;

}
