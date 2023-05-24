#include <stdio.h>
#include <stdlib.h>

int main(){

    char a [4];
    int angka [4];

    for(int i=0; i<3; i++){
        scanf("%c",&a[i]);
        getchar();
        angka[i]=i+1;
    }
    char satu;
    int dua;
    for(int j=0; j<3; j++){
        for(int k=0; k<2-j; k++){
            if(a[k]>a[k+1]){
                satu=a[k];
                a[k]=a[k+1];
                a[k+1]=satu;

                dua=angka[k];
                angka[k]=angka[k+1];
                angka[k+1]=dua;
            }
        }
    }
    printf("%d %d %d\n",angka[0],angka[1],angka[2]);

    return 0;
}
