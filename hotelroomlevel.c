//A C program array

/*Nameb: Muchiri luke kiminda 
Reg number:CT100/G/26251/25
*/

#include <stdio.h>

int main() {
int occupancy[5][10]; 
int floor, room;
int occupied, vacant;

printf(" Hotel Room Occupancy \n");

    
for (floor = 0; floor < 5; floor++) {
printf("\nEnter occupancy for Floor %d (1=occupied, 0=vacant):\n", floor + 1);
for (room = 0; room < 10; room++) {
printf("  Room %d: ", room + 1);
scanf("%d", &occupancy[floor][room]);
}
}

    
printf("Occupancy Summary \n");
for (floor = 0; floor < 5; floor++) {
occupied = 0;
vacant = 0;

for (room = 0; room < 10; room++) {
if (occupancy[floor][room] == 1)
occupied++;
else
vacant++;
}

printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
}

return 0;
}
