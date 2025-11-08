//A C program that allows withdrawal of funds

/*Name: Muchiri luke kiminda 
Reg no: CT100/G/26251/25
*/

#include <stdio.h>
 
 
int main() {
float balance, withdraw;

printf("Enter account balance:");
scanf("%f", &balance);

while (balance > 0) {
printf("Enter amount to withdraw: ");
scanf("%f", &withdraw);

balance -= withdraw;

printf("Remaining balance: %.2f\n", balance);

if (balance <= 0) {
printf("Less funds! Account balance is now %.2f\n", balance);
}

}

return 0;

}
