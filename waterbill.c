//A C program to calculate total water bill

/*Name: Kiminda muchiri luke
Reg Number:CT100/G/26251/25
*/

#include<stdio.h>

int main()
{int units;
float bill;

printf("Enter units used:  ");
scanf("%d", &units);

if(units <=30){
bill=units*20;}
else if(units<=60){
bill=units*25;}

else{bill=units*30;}
printf(" Total water bill: %.2fKES\n",bill);
return 0;
}