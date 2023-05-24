#include <stdio.h>

int main(){
    int a, b, hasil=0,j,i;
    scanf("%d  %d", &a, &b);
    char map[a][b];
    for(i=0; i<a; i++){
        for( j=0; j<b; j++){
            scanf("%c", &map[i][j]);
        }
    }
    for(i=0; i<a; i++){
        for(j=0; j<b; j++)
        {
            if(map[i][j] == '.'){
                hasil+=1;
            }
        }
    }
    printf("%d\n",hasil+1);
    return 0;
}
