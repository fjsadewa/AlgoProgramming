#include<stdio.h>
#include<string.h>

struct karyawan {
    char nama[50];
    char gender[50];
    char div[50];
    int pensiun;
};
int main() {
struct karyawan emp[255];
    int t, proses, index1, index2,i,j;
    char tempnama[255], tempgender[255], tempdiv[255];
    scanf("%d", &t);
    for (i=1;i<=t;i++) {
        scanf("%d", &proses);
        if (proses == 1) {
            char tempnama[255], tempgrnder[255], tempdiv[255];
            scanf("%s %s %s", tempnama,tempgender,tempdiv);
            int flag = 0;
            for (j = 1;j <= t;j++) {
                if (emp[j].pensiun == 1 && strcmp(tempnama, emp[j].nama) == 0) {
                    flag = 1;
                    break;
                }
            } 
   if (flag == 1){
    continue;
   } 
            for (j = 1;j <= t;j++) {
                if (emp[j].pensiun == 0) {
                    emp[j].pensiun = 1;
                    strcpy(emp[j].nama, tempnama);
                    break;
                }
            }

        }
        else if (proses == 2) {
            scanf("%d %d", &index1, &index2);
            if (emp[index1].pensiun == 1 && emp[index2].pensiun == 1) {
                strcpy(tempnama, emp[index1].nama);
                strcpy(emp[index1].nama, emp[index2].nama);
                strcpy(emp[index2].nama, tempnama);
            }

        }
        else if (proses == 3) {
            scanf("%d", &index1);
            emp[index1].pensiun = 0;
            emp[index1].nama[0] = '\0';
        }
        else if (proses == 4) {
            scanf("%d", &index1);
            emp[index1].pensiun = -1;
        }
    }
    for (i = 1;i <= t;i++) {
        if (emp[i].pensiun == 1 && emp[i].nama[0] != '\0') {
            printf("%s\n", emp[i].nama);
        }
    }
    return 0;
}
