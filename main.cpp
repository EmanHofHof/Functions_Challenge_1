//Name: Ethan Hofsteen
//Date: 1/18/26
//Class: MSCI-272
//Purpose: Use overloaded functions in order to calculate area and perimeter of both circles and rectangles
// Creating this program will also deepen my understanding of how function overloading works
#include <iostream>
#include <cmath>
// Circle Area
double calculateArea(const double radius) {
    return M_PI * radius * radius;
}
// Rectangle Area
double calculateArea(const double length, const double width) {
    return length * width;
}
// Circle Area
double calculatePerimeter(const double radius) {
    return M_PI * 2 * radius;
}
// Circle Perimeter
double calculatePerimeter(const double length, const double width) {
    return (2 * length) + (2 * width);
}

int main() {
    int userInput;
    double radius = 0;
    double length = 0;
    double width = 0;
    do {
        std::cout << "1. Area of a Circle" << std::endl;
        std::cout << "2. Perimeter of a Circle" << std::endl;
        std::cout << "3. Area of a Rectangle" << std::endl;
        std::cout << "4. Perimeter of a Rectangle" << std::endl;
        std::cout << "5. Quit Program" << std::endl;
        std::cout << "Please Enter Choice Here (1-5): " << std::endl;
        std::cin >> userInput;
        switch (userInput) {
            // Area of Circle
            case 1:
                std::cout << "Enter Radius (positive number): " << std::endl;
                std::cin >> radius;
                while (radius <= 0) {
                    std::cout << "Invalid Input, Please enter a positive number" << std::endl;
                    std::cin >> radius;
                }
                std::cout << "Circle Area: " << calculateArea(radius) << std::endl << std::endl;
                break;
            // Perimeter of a Circle
            case 2:
                std::cout << "Enter Radius (positive number): " << std::endl;
                std::cin >> radius;
                while (radius <= 0) {
                    std::cout << "Invalid Input, Please enter a positive number" << std::endl;
                    std::cin >> radius;
                }
                std::cout << "Circle Perimeter: " << calculatePerimeter(radius) << std::endl << std::endl;
                break;
            //Area of a Rectangle
            case 3:
                std::cout << "Enter Length (positive number): " << std::endl;
                std::cin >> length;
                while (length <= 0) {
                    std::cout << "Invalid Input, Please enter a positive number" << std::endl;
                    std::cin >> length;
                }
                std::cout << "Enter Width (positive number): " << std::endl;
                std::cin >> width;
                while (width <= 0) {
                    std::cout << "Invalid Input, Please enter a positive number" << std::endl;
                    std::cin >> width;
                }
                std::cout << "Rectangle Area: " << calculateArea(length, width) << std::endl << std::endl;
                break;
            // Perimeter of a Rectangle
            case 4:
                std::cout << "Enter Length (positive number): " << std::endl;
                std::cin >> length;
                while (length <= 0) {
                    std::cout << "Invalid Input, Please enter a positive number" << std::endl;
                    std::cin >> length;
                }
                std::cout << "Enter Width (positive number): " << std::endl;
                std::cin >> width;
                while (width <= 0) {
                    std::cout << "Invalid Input, Please enter a positive number" << std::endl;
                    std::cin >> width;
                }
                std::cout << "Rectangle Perimeter: " << calculatePerimeter(length, width) << std::endl << std::endl;
                break;
            case 5:
                std::cout << "Exiting Program, Thank you for trying it out!" << std::endl;
                break;
            default:
                std::cout << "Invalid Choice, Please enter an integer 1-5" << std::endl;
        }


    }while (userInput != 5);
    return 0;
}