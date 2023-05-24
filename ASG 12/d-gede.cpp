#include<stdio.h>
#include<string.h>
int i,j,k;
struct a{
 int score;
 char name[10];
 int indeks;
}arr[1005];

void merge(int l,int m,int r){
 int n1=m+1-l;
 int n2=r-m;
 struct a L[n1],R[n2];
 for(i=0;i<n1;i++) L[i]=arr[l+i];
 for(i=0;i<n2;i++) R[i]=arr[m+1+i];
 i=0,j=0,k=l;
 while(i<n1 && j<n2){
  if(L[i].score>R[j].score){
   arr[k]=L[i];
   i++;
  }
  else if(L[i].score==R[j].score && strcmp(L[i].name,R[j].name)<0){
   arr[k]=L[i];
   i++;
  }
  else{
   arr[k]=R[j];
   j++;
  }
  k++;
 }
 while(i<n1){
  arr[k]=L[i];
  i++;
  k++;
 }
 while(j<n2){
  arr[k]=R[j];
  j++;
  k++;
 }
}

void sort(int l,int r){
 if(l<r){
  int m=(l+r)/2;
  sort(l,m);
  sort(m+1,r);
  merge(l,m,r);
 }
}

int main(){
 int T;
 scanf("%d",&T); getchar();
 for(i=0;i<T;i++){
  scanf("%s %d",&arr[i].name,&arr[i].score);
  getchar();
 }
 sort(0,T-1);
 int temp,rank;
 for(i=0;i<T;i++) {
 if(i==0)rank=1;
 else if(arr[i].score!=arr[i-1].score)rank=i+1;
  printf("%d %s %d\n",rank,arr[i].name,arr[i].score);
}
 return 0;
}
