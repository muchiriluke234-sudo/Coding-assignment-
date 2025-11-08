//A C program for 1d array

/*Name:Muchiri luke kiminda 
Reg Number: CT100/G/26251/25
*/

#include <stdio.h>

int main() {
float revenue[7];   
float total = 0, average;
int i;

printf("Weekly Revenue Tracker\n");

for (i = 0; i < 7; i++) {
printf("Enter revenue for day %d: ", i + 1);
scanf("%f", &revenue[i]);
total += revenue[i];  

}

average = total / 7;  

printf("Total weekly revenue: %.2f\n", total);
printf("Average daily revenue: %.2f\n", average);

return 0;

}
