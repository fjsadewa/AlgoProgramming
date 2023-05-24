#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp=fopen("testdata.in","r");
    
    char x='1';
    int a,b,v,jumlah,k;
    
    fscanf(fp,"%d %d\n",&a,&b);
    
    v=0;
    jumlah=0;
    for(k=0;k<a;k++)
	{
        fscanf(fp,"%c",&x);
        if(x=='1')v++;
        if(x=='0'|| k==a-1)
		{
            if(v>=b)jumlah++;
            v=0;
        }
    }
    printf("%d\n",jumlah);
    fclose(fp);
    
    return 0;
}
