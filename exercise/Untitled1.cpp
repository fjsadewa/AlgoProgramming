#include <stdio.h>
int main() {
        int n;
        for(n) {
             printf(“\n Enter integer : “);  scanf(“%d “, &n);
             if((n%2) == 0) continue;
             else if((n%3) == 0) break;
             printf(“\n\t Bottom of loop.”);
        }
       print(“\n\t Outside of loop.”);
}

