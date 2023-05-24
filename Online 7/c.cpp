#include <stdio.h>

int check(int num[8],int N,int i,int j){
 int flag=0;
 for(i=0;i<N-1;i++){//cek ada angka yang sama 
  for(j=i+1;j<N;j++){
   if(num[i]==num[j]) flag=1;
  }
 }
 return flag;
}
int f(int N,int n,int num[8],int i, int j){//cek kemungkinan
 if(n<N){
  for(i=1;i<=N;i++){
   num[n]=i;
   f(N,n+1,num,i,j);
   if(n==N-1 && check(num,N,i,j)==0){
    for(j=0;j<N;j++) printf("%d",num[j]);//cetak kemungkinannya
    puts("");
   }
  }
 }
}

int main(){
 int T,N,n,i,j;
 int num[8];
 for(i=0;i<8;i++) num[i]=0;
 scanf("%d",&T);
 for(i=0;i<T;i++){
  scanf("%d",&N);
  n=0;
  printf("Case #%d:\n",i+1);
  f(N,n,num,i,j);
 }
 return 0;
}
