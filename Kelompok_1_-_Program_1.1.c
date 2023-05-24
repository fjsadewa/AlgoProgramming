#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int T;

struct Student {
 	long long int ID;
 	char name[100];
 	int courses;
}data[1000000];

struct Courses {
	float quiz;
 	float task;
 	float exam;
 	float final;
 	char grade;
}score[1000000];

FILE *fptr;

void sortingName();
void sortingCourses();
void inputData();
void showData();
void searchData();

int main (){
 	T = 0;
 	int count = 0;
 	int ans;
    
    fptr = fopen("EnglishCourse.txt", "w");
    fclose(fptr);
    
    do{
 		printf("\t\t\t==================================\n");
 		printf("\t\t\t Welcome to English Last Courses\n");
  		printf("\t\t\t==================================\n\n");
 		printf("1. Input Data\n2. Show Data\n3. Search Data\n4. Terminate Program\n5. Delete All Data\n\n");
	 	printf("Input Option (1/2/3/4/5): ");
 		scanf("%d", &ans);
 		if(ans == 1){
 			inputData();
 			system("cls");
		}else if(ans == 2){
			showData();
			system("cls");
		}else if(ans == 3){
			searchData();
			system("cls");
		}else if(ans == 4){
			break;
		}else if(ans == 5){
			system("cls");
			fptr = fopen("EnglishCourse.txt", "w");
			fclose(fptr);
			printf("Data Already Deleted\n");
			printf("Press Enter to Return to Main Menu");
			getch();
			system("cls");
		}else{
			printf("Option not Founded\n");
			printf("Press Enter to Input Again");
			getch();
			system("cls");
		}
	}while(ans != 4);
	
	printf("\nProgram Will be Terminated\n");
	return 0;
}

void sortingName(struct Student stu[], struct Courses cour[]){
	struct Student d;
	struct Courses s;
	for(int i = 0; i < T; i++){
 		for(int j = i + 1; j < T; j++){
 			if(strcmp(stu[i].name, stu[j].name) == 1){
 				d = stu[i];
 				stu[i] = stu[j];
 				stu[j] = d;
 				s = cour[i];
 				cour[i] = cour[j];
 				cour[j] = s;
			}
		}
	}
}

void sortingCourses(struct Student stu[], struct Courses cour[]){
	struct Student d;
	struct Courses s;
	for(int i = 0; i < T; i++){
 		for(int j = i+1; j < T; j++){
 			if(stu[i].courses > stu[j].courses){
 				d = stu[i];
 				stu[i] = stu[j];
 				stu[j] = d;
 				s = cour[i];
 				cour[i] = cour[j];
 				cour[j] = s;
			}
		}
	}
}

void inputData(){
	system("cls");
	struct Student data[T];
 	struct Courses score[T];
 	int plus;
 	int count;
 	
 	fptr = fopen ("EnglishCourse.txt","a");
 	if(fptr == NULL){
        printf("Error\n");
  		exit(1);
    }
 	
 	printf("\t\t\t==================================\n");
 	printf("\t\t\t\t    Input Data\n");
  	printf("\t\t\t==================================\n\n");
 	printf("Data yang ingin diinputkan (minimal 3 data & maksimal 100 data) = ");
 	scanf("%d", &plus);
 	
 	if(plus < 3 || plus > 100){
 		do{
 			printf("Data yang diinput minimal 3 dan maksimal 100\n");
 			printf("Tekan enter untuk menginput kembali");
 			getch();
 			system("cls");
 			printf("\t\t\t==================================\n");
 			printf("\t\t\t\t    Input Data\n");
  			printf("\t\t\t==================================\n\n");
 			printf("Data yang ingin diinputkan (minimal 3 data & maksimal 100 data) = ");
 			scanf("%d", &plus);
 		}while(plus < 3 || plus > 100);
 	}
 	
	int temp = T;
	T += plus;
 	
    for (count = temp; count < T; count ++){
    	printf  ("\nSiswa ke-%d:\n", count+1);
    	printf  ("Pilih Jenis Kursus (1. Beginner, 2. Intermediate, 3. Advanced) : ");
  		scanf   ("%d", &data[count].courses);
  		printf  ("Nama Siswa : ");
  		scanf   (" %[^\n]", &data[count].name);
  		printf  ("ID siswa : ");
  		scanf   ("%lld", &data[count].ID);
  		printf  ("Nilai Quiz : ");
  		scanf   ("%f", &score[count].quiz);
  		printf  ("Nilai Tugas : ");
  		scanf   ("%f", &score[count].task);
  		printf  ("Nilai Ujian : ");
  		scanf   ("%f", &score[count].exam);
  		score[count].final = (30*score[count].quiz/100) + (30*score[count].task/100) + (40*score[count].exam/100);
  		
  		if (score[count].final <= 100 && score[count].final >= 85){
   			score[count].grade = 65;
  		} else if (score[count].final < 85 && score[count].final >= 70){
   			score[count].grade = 66;
  		} else if (score[count].final < 70 && score[count].final >= 60){
   			score[count].grade = 67;
  		} else if (score[count].final < 60 && score[count].final >= 50){
   			score[count].grade = 68;
  		} else {
   			score[count].grade = 69;
  		}
  		fprintf(fptr, "%d / %s / %lld / %.2f / %.2f / %.2f / %.2f / %c\n", data[count].courses, data[count].name, data[count].ID, score[count].quiz, score[count].task, score[count].exam, score[count].final, score[count].grade);
 	}
	fclose(fptr);
}

void showData(){
	int count;
	int temp;
	int flag=0;
	system("cls");

	fptr = fopen ("EnglishCourse.txt","r");
 	if(fptr == NULL){
        printf("Error\n");
  		exit(1);
    }
	
	struct Student stu[T];
	struct Courses cour[T];
	
	for(int i=0; i<T; i++){
		fscanf(fptr, "%d %*c %s %*c %lld %*c %f %*c %f %*c %f %*c %f %*c %c\n", &stu[i].courses, &stu[i].name, &stu[i].ID, &cour[i].quiz, &cour[i].task, &cour[i].exam, &cour[i].final, &cour[i].grade);
	}
	
	printf("\t\t\t==================================\n");
 	printf("\t\t\t\t    Show Data\n");
  	printf("\t\t\t==================================\n\n");
	
	sortingCourses(stu, cour);
 	sortingName(stu, cour);
	
	printf( "Beginner Class :\n");
    temp=1;
    
    printf ("________________________________________________________________________________________________________________________\n");
 	printf ("|No|\tNama\t|\tID\t|\tQuiz\t|\tTugas\t|\tUjian\t|\tNilai Akhir\t|\tGrade\t|\n");
 	printf ("________________________________________________________________________________________________________________________\n");
 	
    for(count = 0; count < T; count++){
 		if(stu[count].courses == 1){
 			flag = 1;
 			printf ("|%d |\t%s\t|\t%lld\t|\t%.2f\t|\t%.2f\t|\t%.2f\t|\t%.2f\t\t|\t%c\t|\n", temp++, stu[count].name, stu[count].ID, cour[count].quiz, cour[count].task, cour[count].exam, cour[count].final, cour[count].grade);
		}
	}
	printf ("________________________________________________________________________________________________________________________\n\n");
	
	printf( "Intermediate Class :\n");
	temp=1;
	
	printf ("________________________________________________________________________________________________________________________\n");
 	printf ("|No|\tNama\t|\tID\t|\tQuiz\t|\tTugas\t|\tUjian\t|\tNilai Akhir\t|\tGrade\t|\n");
 	printf ("________________________________________________________________________________________________________________________\n");
 	
	for(count = 0; count < T; count++){
 		if(stu[count].courses == 2){
 			flag = 1;
 			printf ("|%d |\t%s\t|\t%lld\t|\t%.2f\t|\t%.2f\t|\t%.2f\t|\t%.2f\t\t|\t%c\t|\n", temp++, stu[count].name, stu[count].ID, cour[count].quiz, cour[count].task, cour[count].exam, cour[count].final, cour[count].grade);
		}
	}
	printf ("________________________________________________________________________________________________________________________\n\n");
	
	printf("Advanced Class :\n");
	temp=1;
	
	printf ("________________________________________________________________________________________________________________________\n");
 	printf ("|No|\tNama\t|\tID\t|\tQuiz\t|\tTugas\t|\tUjian\t|\tNilai Akhir\t|\tGrade\t|\n");
 	printf ("________________________________________________________________________________________________________________________\n");
 	
	for(count = 0; count < T; count++){
 		if(stu[count].courses == 3){
 			flag = 1;
 			printf ("|%d |\t%s\t|\t%lld\t|\t%.2f\t|\t%.2f\t|\t%.2f\t|\t%.2f\t\t|\t%c\t|\n", temp++, stu[count].name, stu[count].ID, cour[count].quiz, cour[count].task, cour[count].exam, cour[count].final, cour[count].grade);
		}
	}
	printf ("________________________________________________________________________________________________________________________\n\n");
	printf("\nPress Enter to Return to the Main Menu");
	getch();
	fclose(fptr);
}

void searchData(){
	long long int id;
	int temp = -1;
	system("cls");
	
	fptr = fopen("EnglishCourse.txt", "r");
	
	struct Student stu[T];
	struct Courses cour[T];
	
	for(int i=0; i<T; i++){
		fscanf(fptr, "%d %*c %s %*c %lld %*c %f %*c %f %*c %f %*c %f %*c %c\n", &stu[i].courses, &stu[i].name, &stu[i].ID, &cour[i].quiz, &cour[i].task, &cour[i].exam, &cour[i].final, &cour[i].grade);
	}
	
	printf("\t\t\t==================================\n");
 	printf("\t\t\t\t    Search Data\n");
  	printf("\t\t\t==================================\n\n");
	
	printf("Input ID: ");
	scanf("%lld", &id);
	for(int i=0; i<T; i++){
		if(stu[i].ID == id){
			temp = i;
			break;
		}
	}
	if(temp != -1){
		printf("Nama: %s\n", stu[temp].name);
		printf("ID: %lld\n", stu[temp].ID);
		if(stu[temp].courses == 1){
			printf("Courses: Beginner\n");
		}else if(stu[temp].courses == 2){
			printf("Courses: Intermediate\n");
		}else{
			printf("Courses: Advanced\n");
		}
		printf("Quiz Score: %.2f\n", cour[temp].quiz);
		printf("Task Score: %.2f\n", cour[temp].task);
		printf("Exam Score: %.2f\n", cour[temp].exam);
		printf("Final Score: %.2f\n", cour[temp].final);
		printf("Grade: %c\n", cour[temp].grade);
	}else{
		printf("ID Not Found\n");
	}
	printf("\nPress Enter to Return to the Main Menu");
	getch();
}
