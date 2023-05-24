#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    long long int t;
    fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &t);
    for(int i=1; i<=t; i++){
        long long int k;
        fscanf(fp, "%d\n", &k);
        int x[k];
        for(int j=0; j<k; j++){
            if(j==k-1){
                fscanf(fp, "%lld", &x[j]);
            }else{
                fscanf(fp, "%lld ", &x[j]);
            }
        }
        long long int luas = 0, keliling = 0, temp, temp2;
        for(int j=0; j<k; j++){
            temp = 4 * x[j];
            luas += temp;
        }
        for(int j=0; j<k; j++){
            if(j==0){
                if(x[j]-x[j+1] > 0){
                    temp2 = (2 * (x[j]-x[j+1])) + 4 + (2 * x[j]);
                }else{
                    temp2 = 4 + (2 * x[j]);
                }
                keliling += temp2;
            }else if(j==k-1){
                if(x[j]-x[j-1] > 0){
                    temp2 = (2 * (x[j]-x[j-1])) + 4 + (2 * x[j]);
                }else{
                    temp2 = 4 + (2 * x[j]);
                }
                keliling += temp2;
            }else{
                if(x[j]-x[j-1] > 0 && x[j]-x[j+1] > 0){
                    temp2 = 4 + (2 * (x[j]-x[j-1])) + (2 * (x[j]-x[j+1]));
                }else if(x[j]-x[j-1] > 0 && x[j]-x[j+1] <= 0){
                    temp2 = 4 + (2 * (x[j]-x[j-1]));
                }else if(x[j]-x[j-1] <= 0 && x[j]-x[j+1] > 0){
                    temp2 = 4 + (2 * (x[j]-x[j+1]));
                }else{
                    temp2 = 4;
                }
                keliling += temp2;
            }
        }
        printf("Case #%lld: %lld %lld\n", i, keliling, luas);
    }
    fclose(fp);
    return 0;
}
