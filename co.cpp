#include<stdio.h>
int main(){
    int x;
    int y;
    scanf("%d",&x);
    for(int i = 0; i < x ; i++){
        scanf("%d", &y);
        printf("Case #%d:\n", i+1);
        for(int j = y; j > 0; j--){
            if(j == 60){
                printf("60 SECONDS TILL NEW YEAR!!\n");
            }else if(j == 30){
                printf("30 SECONDS TILL NEW YEAR!!\n");
            }else if(j == 10){
                printf("10 SECONDS TILL NEW YEAR!!\n");
            }else if(j == 5){
                printf("5 SECONDS TILL NEW YEAR!!\n");
            }else if(j == y){
                printf("%d SECONDS TILL NEW YEAR!!\n", j);
            }else{
                printf("%d\n",j);
            }
        }
    }
    return 0;
}
