#include <stdio.h>

struct nomor
{
    int no;
    int no2;
};

void input(struct nomor list[1000], int n)
{
    int i;
    for(i = 0;i < n;i++)
    {
        scanf("%d",&list[i].no);
    }
}

void printArray(struct nomor list[1000], int n)
{
    printf("%d\n",list[0].no2);
}

void Bubble(struct nomor list[1000], int n)
{
    int i,j;
    struct nomor temp;
    for(i = 0;i < n-1;i++)
    {
        for(j = 0;j < n-1-i;j++)
        {
            if(list[j].no > list[j+1].no)
            {
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}

void Bubble2(struct nomor list[1000], int n)
{
    int i,j;
    struct nomor temp;
    for(i = 0;i < n-1;i++)
    {
        for(j = 0;j < n-1-i;j++)
        {
            if(list[j].no2 > list[j+1].no2)
            {
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}

void pengurangan(struct nomor list[1000], int n)
{
    int i,j;
    for(i = 0;i < n-1;i++)
    {
            list[i].no2 = list[i+1].no - list[i].no;
    }
}

int main(){
    int A,j,B;
    scanf("%d",&A);
    for( j = 0;j < A;j++)
    {
        struct nomor data[1000];
        scanf("%d",&B);
        input(data, B);
        Bubble(data, B);
        pengurangan(data, B);
        Bubble2(data, B-1);
        printf("Case #%d: ",j+1);
        printArray(data, B);
    }
}
C
