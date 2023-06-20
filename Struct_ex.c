#include <stdio.h>

// Define a structure to represent a point in 2D space
struct Point {
    int x;
    int y;
};

// Define a structure to represent a rectangle
struct Rectangle {
    struct Point origin; // Structure within a structure
    int width;
    int height;
};

// Function to display the coordinates of a point
void displayPoint(struct Point p) {
    printf("Point Coordinates: (%d, %d)\n", p.x, p.y);
}

// Function to display the details of a rectangle
void displayRectangle(struct Rectangle rect) {
    printf("Rectangle Details:\n");
    printf("Origin: (%d, %d)\n", rect.origin.x, rect.origin.y);
    printf("Width: %d\n", rect.width);
    printf("Height: %d\n", rect.height);
}

// Function to calculate the area of a rectangle
int calculateArea(struct Rectangle rect) {
    return rect.width * rect.height;
}

int main() {
    // Create a point object
    struct Point p1;
    p1.x = 3;
    p1.y = 5;

    // Display point coordinates
    displayPoint(p1);

    // Create a rectangle object
    struct Rectangle rect1;
    rect1.origin = p1;
    rect1.width = 10;
    rect1.height = 7;

    // Display rectangle details
    displayRectangle(rect1);

    // Calculate and display rectangle area
    int area = calculateArea(rect1);
    printf("Rectangle Area: %d\n", area);

    return 0;
  }
