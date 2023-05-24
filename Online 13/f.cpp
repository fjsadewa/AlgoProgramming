#include <stdio.h>
#include <stdbool.h>

long long int bil[77777];

void prePro(){
    long long int n=1000000, temp=0, i, p;
    bool prime[n+1]; 
    for(int i=0; i<n+1; i++){
        prime[i]=true;
    } 
    for (p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (p=2; p<=n; p++){
       if (prime[p]){
               if(temp>77777){
                break;
            }else{
                bil[temp++]=p;
            }
        }
    }
}

int main(){
    int Testcase, i;
    prePro();
    scanf("%d", &Testcase);
    for(i=1; i<=Testcase; i++){
        int n;
        scanf("%d", &n);
        printf("Case #%d:\n", i);
        int temp = 0;
        int temp2 = 0;
        int temp3 = 2;
        for(int j=0; j<n; j++){
            for(temp; temp<=temp2; temp++){
                if(bil[temp] > 10){
                    while(bil[temp] > 10){
                        bil[temp] %= 10;
                    }
                }
                if(temp==temp2){
                    printf("%lld\n", bil[temp]);
                }else{
                    printf("%lld", bil[temp]);
                }
            }
            temp2+=temp3;
            temp3++;
        }
    }
    return 0;
}
