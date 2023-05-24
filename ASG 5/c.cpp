#include<stdio.h>
int main(){
 int testcase;
 long long int i,j,awal;
 scanf("%d",&testcase);
 for(i=0;i<testcase;i++){
  scanf("%lld",&awal);

  long long int num[200001],mod=1,max=0,temp;
        for(j=0;j<200001;j++){
        num[j]=0;
        }
            for(j=0;j<awal;j++){
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

  printf("Case #%d: ",i+1,mod);
  long long int sum=0;
            for(j=0;j<=max;j++){
                if(num[j]==mod){
                    sum=sum+j+1;
                }
            }
  printf("%lld\n",sum);
 }
 return 0;
}
