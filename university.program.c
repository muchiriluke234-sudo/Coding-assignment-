// University C program

/*Muchiri Luke kiminda
CT100/G/26251/25
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char name[100];
    int registrationNumber;
    float totalMarks;
} Student;

int main() {
    Student s; 

    
    printf("Enter the name of student: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0'; 

    printf("Enter the student's registration number: ");
    scanf("%d", &s.registrationNumber);

    printf("Enter the student's total marks: ");
    scanf("%f", &s.totalMarks);

    
    FILE *fp;
    fp = fopen("C:\\Users\\luke\\OneDrive\\Documents\\Projects\\results.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file");
        return 1;
    }

    
    fwrite(&s, sizeof(Student), 1, fp);
    fclose(fp);

    printf("\nStudent record saved successfully to results.dat\n");
    
     fp=fopen("C:\\Users\\luke\\OneDrive\\Documents\\Projects\\results.dat", "rb");
    if (fp==NULL) {
	printf("Error reading file");
	return 1;
	}
	fread(&s, sizeof(Student), 1, fp);
    fclose(fp);
    
	printf("\nContent from results.dat file:\n");
    printf("Name: %s\n", s.name);
    printf("Registration Number: %d\n", s.registrationNumber);
    printf("Total Marks: %.2f\n", s.totalMarks);
		
    return 0;
}