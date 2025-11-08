//A C program to calculate the volume and surface area of a cylinder

/*Name: Muchiri Luke kiminda 
Registration Number: CT100/G/26251/25
*/

#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, height;
    float volume, surfaceArea;

    // To enter radius and height
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // To calculate volume and the surface area
    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

    // Display results
    printf("\nVolume of the cylinder: %.2f\n", volume);
    printf("Surface area of the cylinder: %.2f\n", surfaceArea);

    return 0;
}
    