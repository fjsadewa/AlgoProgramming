#include <stdio.h>
int main(){
 int testcase,n;
 scanf("%d",&testcase);

 for(int i=1;i<=testcase;i++){
 int temp=0,bagi=2;

  scanf("%d",&n);
  printf("Case #%d: ",i);
            while(bagi>1){
                if(n % bagi==0){
                    temp++;
                    n/=bagi;
                    }
                        else{
                        if(temp!=0){
                        printf("%d",bagi);
            }
                        if(temp>=1){
                        printf(" ^ %d",temp);
            }
                        if(temp!=0 && n!=1){
                        printf(" * ");
            }
                        temp=0;
                        bagi++;
                        if(bagi*bagi>n){
                            bagi=n;
    }
   }
  }
  printf("\n");
 }
 return 0;
}
