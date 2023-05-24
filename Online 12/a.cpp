#include <stdio.h>

struct murid {
    char nama[10000];
    long long int marks;
};

void accept(struct murid list[10000], int a){
    int i;
    for (i = 0; i < a; i++) {
        scanf("\n%[^#]#%lld", &list[i].nama, &list[i].marks);
    }
}

void display(struct murid list[10000], int a){
    int i;

    for (i = 0; i < a; i++) {
        printf("%s - %lld\n", list[i].nama, list[i].marks);
    }
}

void pengurutan_nama(struct murid list[10000], int a){
    int i, j;
    struct murid temp;

    for (i = 0; i < a - 1; i++) {
        for (j = 0; j < (a - 1-i); j++) {
            if (list[j].nama < list[j + 1].nama) 
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}

void pengurutan_tinggi(struct murid list[10000], int a){
    int i, j;
    struct murid temp;

    for (i = 0; i < a - 1; i++) 
    {
        for (j = 0; j < (a - 1-i); j++)
        {
            if (list[j].marks < list[j + 1].marks) 
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}

int main() {
int tc,b;
    scanf("%d", &tc);
    for(b=0; b<tc; b++)
     {

        struct murid data[10000];
        int n;

        scanf("%d", &n);
        accept(data, n);
        pengurutan_nama(data, n);
        pengurutan_tinggi(data, n);
        printf("Case #%d:\n", b+1);
        display(data, n);
    }
    return 0;
}
