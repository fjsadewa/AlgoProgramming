#include<stdio.h>
#include<string.h>

void copy(char A[],char B[],int first,int last){
    int i=0;
    while(i<last)
	{
        B[i]=A[first+i];
        i++;
    }
    B[i]='\0';
}

void atas(char s[][2005],char temp1[],char temp2[],int n,int i)
{
    strcpy(temp1,s[0]);
    int len = strlen(temp1);
    for(i=0;i<n;i++){
        int j;
        for(j=0;j<len;j++){
            if(temp1[j]!=s[i][j])
			{
                break;
            }
        }
        if(j<len)
		{
            len = j;
        }
    }
    copy(temp1,temp2,0,len);

}

void bawah(char s[][2005],char tempb1[],char tempb2[],int n,int i)
{
    strcpy(tempb1,s[0]);
    int len =strlen(tempb1);
    int ctr=10000,k=0,j;
    for(i=0;i<n;i++){
        k=0;
        int len2=strlen(s[i])-1;
        for(j=len-1;j>=0,len2>=0;j--,len2--)
		{
            if(tempb1[j]!=s[i][len2])
			{
                break;
            }
            else
			{
                k++;
            }
        }
        if(ctr>k){
            ctr=k;
        }
    }
    copy(tempb1,tempb2,len-ctr,ctr);
}

int main()
{
    int t,n,i,j;
    FILE*fp=fopen("testdata.in","r");
    fscanf(fp,"%d\n",&t);
    for(i=0;i<t;i++){
        fscanf(fp,"%d\n",&n);
        char s[n][2005],tempa1[2005],tempa2[2005],tempb1[2005],tempb2[2005];
        for(j=0;j<n;j++)
		{
            fscanf(fp,"%s\n",s[j]);
        }
        atas(s,tempa1,tempa2,n,i);
        bawah(s,tempb1,tempb2,n,i);
        printf("Case #%d: %s%s\n",i+1,tempa2,tempb2);
    }
    fclose(fp);
    
    return 0;
}
