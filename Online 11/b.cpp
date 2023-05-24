 #include<stdio.h>
#include<string.h>

int main(){
  int y,x,i,t,k;
  FILE *fp=fopen("testdata.in","r");
  fscanf(fp,"%d\n",&y);
  char string[255];
  for(i=0;i<y;i++){
   fscanf(fp, " %[^\n]\n", string);
   fscanf(fp,"%d\n",&x);
  char l,c;
  int len=strlen(string);
  int ctr[30] = {0};
  int total[1000]={0};
  for(t=0;t<x;t++) {
   
   fscanf(fp,"%c %c\n",&l,&c);
  for(k = 0 ; k < len ; k++) 
  {
      if(ctr[l-'A'] == 1) 
      {
       break;
      } else if(string[k] == l) 
      {
        string[k] = c;
      } 
     }
     ctr[l-'A'] = 1;
    }
     for(k = 0 ; k < len ; k++) {
      if(ctr[l-'A'] == 1) {
       break;
      } else if(string[k] == l) {
        string[k] = c;
      }
     }
    ctr[l-'A'] = 1;
   for(t = 0 ; t < len ; t++) {
     ++total[string[t]-'A'];
   }
   for(t = 0 ; t < 26 ; t++) {
     if(total[t]>0) {
      printf("%c %d\n", t+'A', total[t]);
      total[t]=0;
     }
   }
}
  fclose(fp);
 return 0;
}
