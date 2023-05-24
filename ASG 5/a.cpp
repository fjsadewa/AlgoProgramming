#include <stdio.h>
int main(){
 int testcase;
 long long int i,j,n;
 scanf("%d",&testcase);

 for(i=0;i<testcase;i++){
  scanf("%lld",&n);
  long long int mod=1, max=0,temp, num[200001];

 for(j=0;j<200001;j++){
        num[j]=0;
 }

 for(j=0;j<n;j++){
  scanf("%lld",&temp);
  num[temp-1]+=1;
  if(max<temp){
  max=temp;
  }
 }

 for(j=0;j<max;j++){
  if(mod<num[j]){
  mod=num[j];
  }
 }

  printf("Case #%d: %lld\n",i+1,mod);
  int flag=0;

  for(j=0;j<max;j++){
   if(num[j]==mod){
                if(flag == 0){
                printf("%lld",j+1);
                flag = 1;
            }
                else{
                printf(" %lld",j+1);
            }
   }
  }
  printf("\n");
 }
 return 0;
}
