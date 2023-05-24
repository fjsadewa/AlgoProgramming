#include<stdio.h>
#include<string.h>
struct nama
{
    char nama1[20];
    char nama2[20];
};
int main()
{
  struct nama n[1005];
    int i,j,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s %s",&n[i].nama1,&n[i].nama2);
    int index=1;
    for(j=0;j<i;j++)
{
        if(strcmp(n[i].nama1,n[j].nama1)==0 && strcmp(n[i].nama2,n[j].nama2)==0){
            index++;         
    }          
}
        printf("%s%s%04d\n",n[i].nama1,n[i].nama2,index);// 04 buat munculin 0 jejer
    }
    return 0;
}
