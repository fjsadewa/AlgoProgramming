#include <stdio.h>
#include <string.h>

int main (){
    int v, n, q;
    
    scanf ("%d", &v);
    
    for (int i = 0; i < v; i ++){
        scanf ("%d", &n);
        
        char A[n][101], B[n][101];
        
        for (int j = 0; j < n; j ++){
            scanf ("%s %s", &A[j], &B[j]);
        }
        
        scanf ("%d", &q);
        
        char C[q][101];
        
        for (int j = 0; j < q; j ++){
            scanf ("%s", &C[j]);
        }
        
        printf ("Case #%d:", i + 1);
        
        for (int j = 0; j < q; j ++){
            for (int k = 0; k < n; k ++){
                if (strcmp (C[j], A[k]) == 0){
                    strcpy (C[j], B[k]);
                }
            }
        }
        
        for (int j = 0; j < q; j ++){
            if (j == q - 1){
                printf (" %s\n", C[j]);
            } else {
                printf (" %s", C[j]);
            }
        }
    }
    
    return 0;
}
