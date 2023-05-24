#include<stdio.h>

typedef struct
{
 char nm[8];
 int num;
}data;

void swap( data *p1, data *p2)
{
 data temp=*p1;
 *p1=*p2;
 *p2=temp;
}

void sort(data arr[], int n) 
{
      int i, j, idx_max;
      for (i = 1;  i < n;  i++) {
           idx_max = i;
           for (j = i + 1; j <= n; j++) 
    if (arr[idx_max].num < arr[j].num) 
     idx_max = j;
    else if(arr[idx_max].num == arr[j].num)
    {
     if(strcmp(arr[idx_max].nm, arr[j].nm) > 0) 
      idx_max = j;
    }
    if (idx_max > i) 
     swap(&arr[i], &arr[idx_max]);
      }
} 

int main()
{
 int a, n;
 scanf("%d", &n);
 data dt[n+3];
 for(a=1; a<=n; a++)
 {
  scanf("%s %d", &dt[a].nm, &dt[a].num);
 }
 
 sort(dt, n);
 int p, temp;
 for(a=1; a<=n; a++)
 {
  if(a==1)
  {
   p=a;
   temp=dt[a].num;
  } 
  else 
  {
   if(dt[a].num != temp)
   {
    p=a;
    temp=dt[a].num;
   }
  }
  printf("%d %s %d\n", p, dt[a].nm, dt[a].num);
 }
 return 0;
}
D
