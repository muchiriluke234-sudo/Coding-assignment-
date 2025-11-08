// C program to allow input of book title

/*Muchiri Luke kiminda 
CT100/G/26251/25
*/

#include <stdio.h>

int main() {
FILE *file;
char title[100];

file = fopen("borrowed_books.txt", "a"); // open in append mode
if (file == NULL) {
printf("Error opening file!\n");
return 1;
}

printf("Enter book title: ");
fgets(title, sizeof(title), stdin);

fprintf(file, "%s", title); 
fclose(file);

printf("Book title saved successfully!\n");
return 0;
}
