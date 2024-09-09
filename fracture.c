//Muhammad Izhar mu367696
#include <stdio.h>
#include <math.h>

// Defines pi
#define pi 3.14159

// Function Prototypes
double askForUserInput();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

//Main fuction
int main(int argc, char **argv) {
    // Calls the functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 1;
}

// Function for user input
double askForUserInput() {
    double value;
    scanf("%lf", &value); // retreives info
    return value;
}

// Function for distance formula
double calculateDistance() {
    double x1, y1, x2, y2;
    
    // Get input using askForUserInput
    printf("Enter x1: ");
    x1 = askForUserInput();
    printf("Enter x2: ");
    x2 = askForUserInput();
    printf("Enter y1: ");
    y1 = askForUserInput();
    printf("Enter y2: ");
    y2 = askForUserInput();

    // Calculates distance
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // prints distance
    printf("The distance between the two points is %.2f\n", distance);

    //difficulty
    return distance; //difficulty 4 because i kept on forgreeting to type -lm
}

// Function to calculate the cirumfrence 
double calculatePerimeter() {
    double distance = calculateDistance(); // calls back in distance function
    double perimeter = 2 * pi * (distance * .5) ;

    //prints distance
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    return 2.0;
}

// Function to calculate the area of a circle
double calculateArea() {
    double distance = calculateDistance(); // Reuse the distance function
    double area = pi * (.5 *distance) * (.5 * distance);

    // prints area
    printf("The area of the city encompassed by your request is %.2f\n", area);

    // difficulty 
    return 3.0; //forgot pi was case sensitive, kept on messing up on how to do a value square so resorted to writing it out
}

// Function to calculate the width between the two points
double calculateWidth() {
    double x1, x2;

    // retrives x values
    printf("Enter x1: ");
    x1 = askForUserInput();
    printf("Enter x2: ");
    x2 = askForUserInput();

    // Calculate width
    double width = fabs(x2 - x1); // fabs is absolute value

    // Output required lines
    printf("The width of the city encompassed by your request is %.2f\n", width);

    return 2.0; //took awhile for me to realize the importance of absolute value and how to incorporate it
}

// Function to calculate the length between the two points
double calculateHeight() {
    double y1, y2;

    // retreieve y values
    printf("Enter y1: ");
    y1 = askForUserInput();
    printf("Enter y2: ");
    y2 = askForUserInput();

    // Calculates height
    double height = fabs(y2 - y1); // fabs() for absolute value

    printf("The height of the city encompassed by your request is %.2f\n", height);

    return 1.0; // was easier after doing x values
}
