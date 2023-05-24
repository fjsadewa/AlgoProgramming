#include<stdio.h>
struct a{
    char city[1002];
    char tempera;
   double T1,T2;
}; 
int main()
{
 FILE *fp=fopen("testdata.in","r");
 int i,j;
 int n=0;
 struct a arr[100];
 while(!(feof(fp)))
 {
  fscanf(fp,"%[^#]#%lf#%c\n",&arr[n].city,&arr[n].T1,&arr[n].tempera);
  if(arr[n].tempera=='C') arr[n].T2=arr[n].T1;
  else if(arr[n].tempera=='F') arr[n].T2=5*(arr[n].T1-32)/9;
  n++;
 }
 
 struct a swap;
 for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) { 
      if (arr[j].T2 > arr[j + 1].T2) {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
            if(arr[j].T2==arr[j+1].T2 && strcmp(arr[j].city,arr[j+1].city)>0){
             swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
   }
  }
    }
    
    for(i=0;i<n;i++){
   printf("%s is %.2lf%c\n",arr[i].city,arr[i].T1,arr[i].tempera);
 }
fclose(fp);
 return 0;
}
