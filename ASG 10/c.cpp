#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct sks
{
    char Code[255];
    char name[255];
    int Time;
};

int main(){
    struct sks a[1000];
    int n,i,m;
    scanf("%d",&n);
    for(i = 1;i <=n;i++)
    {
        scanf("%s %[^\n] %d",&a[i].Code,&a[i].name,&a[i].Time);
    }
    scanf("%d",&m);
    int b[m];
    for(i = 1;i <= m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i = 1;i <= n;i++)
    {
        printf("Query #%d:\n",i);
        printf("Code: %s\nDay: %s\nTime: %.2d:00\n",a[b[i]].Code,a[b[i]].name,a[b[i]].Time);
    }

    return 0;
}

