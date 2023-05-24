#include<stdio.h>
#include<string.h>
int main(){
 long long int T,i,k;
 scanf("%lld",&T);
 for(i=1;i<=T;i++){
  long long int l,r;
  char number[1000];
  scanf("%lld",&l);
  scanf("%s[^\n]",number);
  r=strlen(number); 
     printf("Case #%lld: ",i);
     if(number[r-2]=='1')
	 {
      printf("%sth\n",number);
  }

     else if(number[r-1]=='1')
	 {
           printf("%sst\n",number);
  }
  else if(number[r-1]=='2')
  {
           printf("%snd\n",number);
  }
  else if(number[r-1]=='3')
  {
           printf("%srd\n",number);
  }
  else
  {
   printf("%sth\n",number);
  }
 }
 return 0;
}
