Calculate the area of square


#include <stdio.h>


float square();

int main() {
    printf("Going to calculate the area of a square\n");
    float area = square();
    printf("The area of the square: %f\n", area);
    return 0;
}


float square() {
    float side;
    printf("Enter the length of the square in meters: ");
    scanf("%f", &side);
    return side * side;
}
