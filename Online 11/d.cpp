#include<stdio.h>
#include<string.h>

int main(){
    int T,tc,i,j,k;
    FILE* fp= fopen("testdata.in","r");
    fscanf(fp,"%d\n",&T);
    char sec[T][155],real[T][155];
    for(i=0;i<T;i++)
    {
        fscanf(fp,"%[^#]#%s\n",sec[i],real[i]);
    }
    fscanf(fp,"%d\n",&tc);
    char full[155],kata[155][155],bayangan[155];
    for(i=0;i<tc;i++){
        fscanf(fp,"%[^\n]\n",bayangan);
        printf("Case #%d:\n",i+1);
        int index=0,ctr=0;
        for(j=0;j<=strlen(bayangan);j++)
        {
            if(bayangan[j]==' '||bayangan[j]=='\0'){
                kata[ctr][index]='\0';
                ctr++;
                index=0;
            }
            else{
                kata[ctr][index]=bayangan[j];
                index++;
            }
        }
        int flag=0;
        for(j=0;j<ctr;j++)
        {
            for(k=0;k<T;k++)
            {
                if(strcmp(kata[j],sec[k])==0){
                    printf("%s",real[k]);
                    if(j!=ctr-1){
                        printf(" ");
                    }
                    flag=1;
                    break;
                }
                else{
                    flag=0;
                }
            }
            if(flag==0){
                printf("%s",kata[j]);
                if(j!=ctr-1){
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    fclose(fp);
    return 0;

}
