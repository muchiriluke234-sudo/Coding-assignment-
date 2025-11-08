//A C program to check exam eligibility

/*Name : kiminda luke muchiri . 
Reg Number:CT100/G/26251/25
*/


#include <stdio.h>
int main()
{float attendance, averagemarks;

//Attendance input

printf("Input attendance percent:   ");
scanf("%f", &attendance);

//Average marks input

printf("Input averagemarks:   ");
scanf("%f", & averagemarks);
if(attendance >=75 && averagemarks>=40)
{printf("Qualify for exam\n");}
else {printf(" Not eligible\n");}

return 0;
}