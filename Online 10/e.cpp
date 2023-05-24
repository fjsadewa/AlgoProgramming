#include<stdio.h>

struct data{
    char name[50];
    int salary1,salary2,salary3;
};

int main(){
	struct data user[255];
    int t,n,q;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&q);
        for(int j=0;j<n;j++){
            scanf("%s %d %d %d",user[j].name,&user[j].salary1,&user[j].salary2,&user[j].salary3);
        }
        int index[q],u[q],v[q];
        for(int j=0;j<q;j++){
            scanf("%d %d %d",&index[j],&u[j],&v[j]);
        }
        for(int j=q-1;j>=0;j--){
            if(index[j]==1){
                while(u[j]<v[j]){
                    int temp1=user[u[j]-1].salary1;
                    int temp2=user[u[j]-1].salary2;
                    int temp3=user[u[j]-1].salary3;
                    user[u[j]-1].salary1=user[v[j]-1].salary1;
                    user[u[j]-1].salary2=user[v[j]-1].salary2;
                    user[u[j]-1].salary3=user[v[j]-1].salary3;
                    user[v[j]-1].salary1=temp1;
                    user[v[j]-1].salary2=temp2;
                    user[v[j]-1].salary3=temp3;
                    u[j]++,v[j]--;               
                }
            }
            else if(index[j]==2){
                for(int k=u[j]-1;k<v[j];k++){
                    int temp = user[k].salary3;
                    user[k].salary3=user[k].salary2;
                    user[k].salary2=user[k].salary1;
                    user[k].salary1=temp;
                }
            }
        }
        printf("Case #%d:\n",i+1);
        for(int k=0;k<n;k++){
            printf("%s %d\n",user[k].name,user[k].salary3);
        }
    }
    return 0;
}
