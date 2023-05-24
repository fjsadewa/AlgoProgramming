#include<stdio.h>
#include<string.h>

int ctr;
char m[50],n[50];

void cek (int x,int y,int len,int ln){
 if(x<len && y<ln){
  for(int i=x;i<len;i++){
   if(m[i]==n[y] && y<ln-1) cek(i+1,y+1,len,ln);
   else if(m[i]==n[y] && y==ln-1) ctr++;
  }
 }
}

int main(){
 int T;
 scanf("%d",&T); 
 getchar();
 for(int i=0;i<T;i++){
  gets(m);
  gets(n);
  ctr=0;
  int x=strlen(m),y=strlen(n);
  if(x>=y) cek(0,0,strlen(m),strlen(n));
  printf("Case #%d: %d\n",i+1,ctr);
 }
 return 0;
}
