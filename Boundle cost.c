//A C program that displays bundle menu

/*Name:Muchiri Luke kiminda 
Reg number:Ct100/G/26251/25
*/

#include <stdio.h>

int main() {
int choice;
printf("Select a data bundle:\n");
printf("1.100MB - 50 KES\n");
printf("2.500MB - 200 KES\n");
printf("3.1GB   - 350 KES\n");
printf("4.2GB   - 600 KES\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch(choice) {

case 1:
printf("You selected 100MB - 50 KES\n");
break;

case 2:
printf("You selected 500MB - 200 KES\n");
break;

case 3:
printf("You selected 1GB - 350 KES\n");
break;

case 4:
printf("You selected 2GB - 600 KES\n");
break;

default:
printf("Kindly,select 1-4.\n");
}

return 0;

}
