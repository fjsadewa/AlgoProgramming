#include <stdio.h>

int main()
{
    int t,i;
    int b;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&b);
        if(b%11==0 && b%7!=0){
            printf("Case #%d: Eleven\n",i);
        }
        else if(b%11!=0 && b%7==0){
            printf("Case #%d: Seven\n",i);
        }    
        else if(b%11!=0 && b%7!=0){
            printf("Case #%d: %d\n",i,b);
        } 
        else if(b%11==0 && b%7==0){
            printf("Case #%d: ElevenSeven\n",i);
        }
        
    }   
    
   return 0;
}
