#include <iostream>
#include <cmath>
using namespace std;

void rectangle() {
    double length, width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    cout << "Perimeter: " << 2 * (length + width) << endl;
    cout << "Area: " << length * width << endl;
}

void circle() {
    double radius;
    const double PI = 3.14159;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Perimeter (Circumference): " << 2 * PI * radius << endl;
    cout << "Area: " << PI * radius * radius << endl;
}

void square() {
    double side;
    cout << "Enter side length: ";
    cin >> side;
    cout << "Perimeter: " << 4 * side << endl;
    cout << "Area: " << side * side << endl;
}

void triangle() {
    int choice;
    cout << "Select Triangle Type:\n";
    cout << "1. Scalene Triangle\n";
    cout << "2. Isosceles Triangle\n";
    cout << "3. Equilateral Triangle\n";
    cout << "4. Right-Angled Triangle\n";
    cout << "Enter choice: ";
    cin >> choice;
    
    double a, b, c, perimeter, area;
    switch (choice) {
        case 1: // Scalene Triangle
            cout << "Enter side A: "; cin >> a;
            cout << "Enter side B: "; cin >> b;
            cout << "Enter side C: "; cin >> c;
            perimeter = a + b + c;
            double s;
            s = perimeter / 2;
            area = sqrt(s * (s - a) * (s - b) * (s - c));
            break;
        case 2: // Isosceles Triangle
            cout << "Enter equal side length: "; cin >> a;
            cout << "Enter base length: "; cin >> b;
            perimeter = 2 * a + b;
            area = (b / 4) * sqrt(4 *  pow(a, 2) -  pow(b, 2));
            break;
        case 3: // Equilateral Triangle
            cout << "Enter side length: "; cin >> a;
            perimeter = 3 * a;
            area = (sqrt(3) / 4) * pow(a, 2);
            break;
        case 4: // Right-Angled Triangle
            cout << "Enter base: "; cin >> a;
            cout << "Enter height: "; cin >> b;
            c = sqrt( pow(a, 2) +  pow(b, 2));
            perimeter = a + b + c;
            area = 0.5 * a * b;
            break;
        default:
            cout << "Invalid choice!" << endl;
            return;
    }
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;
}

// int main() {
//     int choice;
//     int section;
//     do {
//         cout << "________________________________________________________________________" << endl;
//         cout << ".                                                                      ." << endl;
//         cout << ".                               PRIME SOLO                             ." << endl;
//         cout << "________________________________________________________________________" << endl;
//         cout << "           Section l : Perimeter and Area Calculation of                " << endl;
//         cout << "                  >>>>   1.   Rectangle       <<<<" << endl;
//         cout << "                  >>>>   2.   CirCle          <<<<" << endl;
//         cout << "                  >>>>   3.   Square          <<<<" << endl;
//         cout << "                  >>>>   4.   Triangle        <<<<" << endl;
//         cout << "                  >>>>   5.   Exit            <<<<" << endl;
//         cout << "                  __Please Enter your choice below__" << endl;
//         cin >> choice;
        
//         switch (choice) {
//             case 1: rectangle(); break;
//             case 2: circle(); break;
//             case 3: square(); break;
//             case 4: triangle(); break;
//             case 5: cout << "Exiting program. Thank you!" << endl; break;
//             default: cout << "Try again!" << endl;
//         }
//     } while (choice != 5);
    
//     return 0;

    
// }
