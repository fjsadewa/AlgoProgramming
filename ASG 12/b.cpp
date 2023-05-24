#include<stdio.h>
#include<string.h>

 int i,j,k;
struct a{
    char name[55];
    long long int nilai;
};
void bubbleSort(struct a arr[], int n) {
 struct a swap;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) { 
            if (arr[j].nilai > arr[j + 1].nilai) {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
            else if(arr[j].nilai==arr[j+1].nilai && strcmp(arr[j].name,arr[j+1].name)>0){
             swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
   }
        }
    }
}
int main(){
 struct a arr[100];
 int t;
 scanf("%d",&t);
 for(i=0;i<t;i++){
  scanf("%s %lld",&arr[i].name,&arr[i].nilai);
  
 }
 bubbleSort(arr, t);
 for(i=0;i<t;i++){
  printf("%s\n",arr[i].name);
 }
 return 0;
}
