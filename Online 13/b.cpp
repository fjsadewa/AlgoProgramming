#include <stdio.h>

struct angka{
    int a1;
    int a2;
};

void Sort(struct angka list[255], int n){
    struct angka temp;
    for(int i = 0;i <n;i++){
        for(int j = 0;j <n-i-1;j++){
            if(list[j].a1 < list[j+1].a1){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}

void CheckNum(struct angka list[255], int n, int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(list[i].a2 == list[j].a1){
                list[j].a1 = 0;
            }
        }
    }
}


int main(){
    int N,M,i;
    struct angka input[255];
    scanf("%d %d",&N,&M);
    for(i = 0;i<N;i++){
        scanf("%d",&input[i].a1);
    }
    for(i = 0;i<M;i++){
        scanf("%d",&input[i].a2);
    }
    CheckNum(input, N, M);
    Sort(input, N);
    if(N == 0 || input[0].a1 == 0){
        printf("Maximum number is -1\n");
    }
    else{
    	printf("Maximum number is %d\n",input[0].a1);
    }

    return 0;
}
