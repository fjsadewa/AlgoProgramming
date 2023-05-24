#include <stdio.h>

struct ipkmhs {
	char nim[11];
	char name[30];
	float gpa;
}mhs;

int main()
{
	struct ipkmhs array[20];
	int i,j;
	
	printf("Banyaknya Mahasiswa : ");
	scanf("%d", &j);	
	for(i=1;i<=j;i++)
	{
	    printf("Mahasiswa ke-%d \n",i); 
		printf("Masukan NIM : ");
	    scanf("%s", &array[i].nim);
	    printf("Masukan Nama : ");
	    scanf("%s", &array[i].name);
	    printf("Masukan GPA : ");
	    scanf("%f", &array[i].gpa);
	    printf("\n");
	}
	
	printf(" Mhs gpa >=3.0 :\n");
	for(i=1;i<=j;i++)
	{
		if(array[i].gpa>=3.0)
		{
			printf("%s\n", array[i].name);
		}
	}

	printf("\n Mhs gpa <3.0 :\n");
	
	for(i=1;i<=j;i++)
	{
		if(array[i].gpa<3.0)
		{
			printf("%s\n", array[i].name);
		}		
	}

	return 0;

}

