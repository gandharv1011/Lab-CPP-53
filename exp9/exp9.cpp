#include <iostream> 
#include <cmath>
const double PI = 3.14159; 
class Shape { 
 public:
 virtual double calculateArea() const = 0;
 virtual double calculatePerimeter() {
 return 2 * PI ; 
 }
};
class Circle: public Shape { 
private:
 double radius; 
 public:
 Circle(double rad): radius(rad) {}
 double calculateArea() const override {
 return PI * pow(radius, 2); 
 }
 /*double calculatePerimeter() const override {
 return 2 * PI * radius;
 }*/
};
class Rectangle: public Shape { 
 private:
 double length;
 double width; 
 public:
 Rectangle(double len, double wid): length(len), width(wid) {}
 double calculateArea() const override {
 return length * width; 
 }
 double calculatePerimeter()  {
 return 2 * (length + width); 
 }
};
class Triangle: public Shape {
 private:
 double side1; 
 double side2; 
 double side3;
 public:
 // Constructor for Triangle class
 Triangle(double s1, double s2, double s3): side1(s1), side2(s2), side3(s3) {}
 // Override the virtual member function to calculate the area
 double calculateArea() const override {
 // Using Heron's formula to calculate the area of a triangle
 double s = (side1 + side2 + side3) / 2; // Calculate the semi-perimeter of the triangle
 return sqrt(s * (s - side1) * (s - side2) * (s - side3)); // Calculate the area using Heron's
 }
 // Override the virtual member function to calculate the perimeter
 double calculatePerimeter()  {
 return side1 + side2 + side3; // Calculate the perimeter of the triangle using its sides
 }
};
int main() {
// Create instances of different shapes: Circle, Rectangle, and Triangle
 Circle circle(7.0); // Create a Circle object with radius 7.0
 Rectangle rectangle(4.2, 8.0); // Create a Rectangle object with length 4.2 and width 8.0
 Triangle triangle(4.0, 4.0, 3.2); // Create a Triangle object with sides 4.0, 4.0, and 3.2
 // Calculate and display the area and perimeter of each shape
 std::cout << "Circle: " << std::endl;
 std::cout << "Area: " << circle.calculateArea() << std::endl; // Calculate and output the
 std::cout << "Perimeter: " << circle.calculatePerimeter() << std::endl; // Calculate and
 std::cout << "\nRectangle: " << std::endl;
 std::cout << "Area: " << rectangle.calculateArea() << std::endl; // Calculate and outpu
 std::cout << "Perimeter: " << rectangle.calculatePerimeter() << std::endl; // Calcula
 std::cout << "\nTriangle: " << std::endl;
 std::cout << "Area: " << triangle.calculateArea() << std::endl; // Calculate and out
 std::cout << "Perimeter: " << triangle.calculatePerimeter() << std::endl; // Calculate and
 return 0; // Return 0 to indicate successful completion
}