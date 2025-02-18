#include <iostream>
#include <cstdlib> // For atof
#define PI 3.14159
using namespace std;
class Circle {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getArea() {
        return PI * radius * radius;
    }
    double getPerimeter() {
        return 2 * PI * radius;
    }
};
int main(int argc, char* argv[]) {
    if (argc != 2) {
        cout << "Usage: " << argv[0] << " <radius>" << endl;
        return 1;
    }
    double radius = atof(argv[1]); 

    if (radius <= 0) {
        cout << "Error: Radius must be a positive number." << endl;
        return 1;
    }
    Circle circle(radius);
    cout << "Area: " << circle.getArea() << endl;
    cout << "Perimeter: " << circle.getPerimeter() << endl;
    return 0;
}
