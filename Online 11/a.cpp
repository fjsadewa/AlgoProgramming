#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;
    int y;
    fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &y);
    for(int i=1; i<=y; i++){
        int x;
        char print[1000];
        fscanf(fp, "%d\n", &x);
        fgets(print, 1000, fp);
        for(int j=0; j<strlen(print); j++){
            if(print[j] == '\n'){
                print[j] = '\0';
            }
        }
        for(int j=0; j<strlen(print); j++){
            if(print[j]=='0'){
                print[j] = 'O';
            }else if(print[j]=='1'){
                print[j] = 'I';
            }else if(print[j]=='3'){
                print[j] = 'E';
            }else if(print[j]=='4'){
                print[j] = 'A';
            }else if(print[j]=='5'){
                print[j] = 'S';
            }else if(print[j]=='6'){
                print[j] = 'G';
            }else if(print[j]=='7'){
                print[j] = 'T';
            }else if(print[j]=='8'){
                print[j] = 'B';
            }else if(print[j] == ' '){
                continue;
            }
            for(int l=1; l<=x; l++){
                print[j]--;
                if(print[j] < 'A'){
                    print[j] = 'Z';
                }
            }
        }
        printf("Case #%d: %s\n", i, print);
    }
    fclose(fp);
    return 0;
}

