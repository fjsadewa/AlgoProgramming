#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int T, T2, Check;
    
    FILE *fptr;
    
    fptr = fopen ("testdata.in", "r");
    
    if(fptr == NULL){
        printf ("File testdata.in cannot be opened\n");   
    }
    
    fscanf (fptr, "%d", &T);
    
    long long int Num[T];
    char Name[T][100];
    
    for (int i = 0; i < T; i ++){
        fscanf (fptr, "%lld %s", &Num[i], &Name[i]);
    }
    
    fscanf (fptr, "%d", &T2);
    
    long long int Num2[T2];
    
    for (int i = 0; i < T2; i ++){
        fscanf (fptr, "%lld", &Num2[i]);
    }
    
    for (int i = 0; i < T2; i ++){
        Check = 0;
        for (int j = 0; j <= T; j ++){
            Check ++;
            if (Num2[i] == Num[j]){
                printf ("Case #%d: %s\n", i + 1, Name[j]);
                break;
            } else if (Check == T){
                printf ("Case #%d: N/A\n", i + 1);
            }
        }    
    }
    
    return 0;
}
