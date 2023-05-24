#include<stdio.h>
#include<string.h>
struct book{
    int id;
    char judul[10];
    char pengarang[10];
    int pembaca;
};


int main(){
    int t,n,m;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
		struct book lili[n];
        for(int j=0;j<n;j++){
            scanf("%d %s %s",&lili[j].id,lili[j].judul,lili[j].pengarang);
            lili[j].pembaca=0;
        }
        scanf("%d",&m);
		struct book bibi[m];
        for(int j=0;j<m;j++){
            scanf("%d %s %s",&bibi[j].id,bibi[j].judul,bibi[j].pengarang);
            bibi[j].pembaca=1;
        }
        struct book temp[n+m];
        int l=0,k=0,p=0;
        while(l<n && k<m){
            if(lili[l].id>bibi[k].id){
                temp[p]=bibi[k];

                p++,k++;
            }
            else if(lili[l].id<bibi[k].id){
                temp[p]=lili[l];

                p++,l++;
            }
            else if(lili[l].id==bibi[k].id){
                if(strcmp(lili[l].judul,bibi[k].judul)>0){
                    temp[p]=bibi[k];
                    p++,k++;
                }
                else{
                    temp[p]=lili[l];
                    p++,l++;
                }
            }
        }
        while(l<n){
            temp[p]=lili[l];
            p++,l++;
        }
        while(k<m){
            temp[p]=bibi[k];
            p++,k++;
        }
        printf("Case #%d:\n",i+1);
        for(int j=0;j<n+m;j++){
            if(temp[j].pembaca==1){
                printf("%d\n",j+1);
            }
        }
    }
    
    
    return 0;
}
