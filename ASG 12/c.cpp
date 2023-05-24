#include<stdio.h>
#include<string.h>
int main(){
	int i,j,k;
	int T,N;
	char name[105][105],temp[105];
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d",&N);
		for(j=0;j<N;j++){
			scanf("%s",&name[j]);
		}
		for(j=0;j<N-1;j++){
			for(k=0;k<N-1-j;k++){
				if(strcmp(name[k],name[k+1])>0){
					strcpy(temp,name[k]);
					strcpy(name[k],name[k+1]);
					strcpy(name[k+1],temp);
				}
			}
		}
		
		printf("Case #%d: ",i+1);
		int ctr=1;
		for(j=0;j<N-1;j++){
			if(strcmp(name[j],name[j+1])!=0) ctr++;
		}
		printf("%d\n",ctr);
}

	return 0;
}

//1
//20
//nano
//samuel
//carla
//christian
//polo
//lucrecia
//guzman
//nadia
//omar
//ander
//nadia
//samuel
//carla
//ander
//polo
//christian
//polo
//nano
//nadia
//samuel
