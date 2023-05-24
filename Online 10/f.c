#include<stdio.h>
#include<string.h>

struct book{
    int id;
    char title[10];
    char author[10];
    int people;
};


int main(){
    int Testcase,n,m;
    scanf("%d",&Testcase);
    	for(int i=0;i<=Testcase;i++){
        	scanf("%d",&n);
        		book lili[n];
        for(int j=0;j<n;j++){
            scanf("%d %s %s",&lili[j].id,lili[j].title,lili[j].author);
            lili[j].people=0;
        }
        scanf("%d",&m);
        book bibi[m];
        for(int j=0;j<m;j++){
            scanf("%d %s %s",&bibi[j].id,bibi[j].title,bibi[j].author);
            bibi[j].people=1;
        }
        book temp[n+m];
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
                if(strcmp(lili[l].title,bibi[k].title)>0){
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
            if(temp[j].people==1){
                printf("%d\n",j+1);
            }
        }
    }
    
    
    return 0;
}
