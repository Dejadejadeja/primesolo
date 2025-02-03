#include <iostream>
#include <cmath>
#include <iomanip> // For setting decimal precision

#define PI 3.14159265358979323846 // Defining Pi value

using namespace std;

// int main()
// {
//           double angle_degrees, angle_radians;
//           int choice;

//           cout << "Enter the angle in degrees: ";
//           cin >> angle_degrees;

//           // Convert angle from degrees to radians
//           angle_radians = angle_degrees * (PI / 180.0);

//           // Menu for choice
//           cout << "______________________________________" << endl;
//           cout << "                                      " << endl;
//           cout << "   Choose which function to calculate";
//           cout << "______________________________________" << endl;
//           cout << "";
//           cout << "1. >>>  Sine   <<<\n";
//           cout << "2. >>>  Cosine <<<\n";
//           cout << "3. >>> Tangent <<<\n";
//           cout << "   >>> Enter your choice : ";
//           cin >> choice;

//           // Set precision for output
//           cout << fixed << setprecision(3);

//           // Calculate based on the user's choice
//           switch (choice)
//           {
//           case 1:
//                     cout << "Sine of " << angle_degrees << " degrees: " << sin(angle_radians) << endl;
//                     break;
//           case 2:
//                     cout << "Cosine of " << angle_degrees << " degrees: " << cos(angle_radians) << endl;
//                     break;
//           case 3:
//                     cout << "Tangent of " << angle_degrees << " degrees: " << sin(angle_radians) * 1/cos(angle_radians) << endl;
//                     break;

//           default:
//                     cout << "Invalid choice! Please enter 1, 2, or 3." << endl;
//           }

//           return 0;
// }
