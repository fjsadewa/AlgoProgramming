#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int i,j;
    char a[100];
    char ans[100];
    int temp = 0;
    gets(a);
    for(i=0; i<strlen(a); i++){
        if(islower(a[i]) != 0){
            ans[temp++] = a[i]; 
        }
    }
    for(i=0; i<temp; i++){
        for( j=i+1; j<temp; j++){
            if(ans[i] > ans[j]){
                char flag;
                flag = ans[i];
                ans[i] = ans[j];
                ans[j] = flag;
            }
        }
    }
    for( i=0; i<temp; i++){
        if(i==temp-1){
            printf("%c\n", ans[i]);
        }else{
            printf("%c", ans[i]);
        }
    }
    return 0;
}


