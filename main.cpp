#include <iostream>
#include <cmath>
#include <iomanip> // For setting decimal precision
#include "1.cpp"
#include "3.cpp"

#define PI 3.14159265358979323846 // Defining Pi value
using namespace std;

int main()
{
          int choice;
          int section;
          bool run = true;
          while (run)
          {
                    cout << "Choose a number from 1 to 3: ";
                    cin >> section;
                    switch (section)
                    {
                    case 1:
                              // int choice;
                              do
                              {
                                        cout << "________________________________________________________________________" << endl;
                                        cout << ".                                                                      ." << endl;
                                        cout << ".                               PRIME SOLO                             ." << endl;
                                        cout << "________________________________________________________________________" << endl;
                                        cout << "           Section l : Perimeter and Area Calculation of                " << endl;
                                        cout << "                  >>>>   1.   Rectangle       <<<<" << endl;
                                        cout << "                  >>>>   2.   CirCle          <<<<" << endl;
                                        cout << "                  >>>>   3.   Square          <<<<" << endl;
                                        cout << "                  >>>>   4.   Triangle        <<<<" << endl;
                                        cout << "                  >>>>   5.   Exit            <<<<" << endl;
                                        cout << "                  __Please Enter your choice below__" << endl;
                                        cin >> choice;

                                        switch (choice)
                                        {
                                        case 1:
                                                  rectangle();
                                                  break;
                                        case 2:
                                                  circle();
                                                  break;
                                        case 3:
                                                  square();
                                                  break;
                                        case 4:
                                                  triangle();
                                                  break;
                                        case 5:
                                                  cout << "Exiting program. Thank you!" << endl;
                                                  break;
                                        default:
                                                  cout << "Try again!" << endl;
                                        }
                              } while (choice != 5);

                              break;
                    case 2:
                              double leg, hypotenuse;

                              // Given hypotenuse
                              hypotenuse = 0;

                              cout << "Enter value of hypotenuse : ";
                              cin >> hypotenuse;

                              // Calculate the length of each leg (since leg1 == leg2)
                              leg = sqrt(pow(hypotenuse, 2) / 2);

                              cout << "The length of each leg is: " << leg << endl;

                              break;
                    case 3:
                              double angle_degrees, angle_radians;
                              int choice;

                              cout << "Enter the angle in degrees: ";
                              cin >> angle_degrees;

                    case 4:
                              cout << "Exist the program! Try again";

                              // Convert angle from degrees to radians
                              angle_radians = angle_degrees * (PI / 180.0);

                              // Menu for choice
                              cout << "______________________________________" << endl;
                              cout << "                                      " << endl;
                              cout << "   Choose which function to calculate";
                              cout << "______________________________________" << endl;
                              cout << "";
                              cout << "1. >>>  Sine   <<<\n";
                              cout << "2. >>>  Cosine <<<\n";
                              cout << "3. >>> Tangent <<<\n";
                              cout << "   >>> Enter your choice : ";
                              cin >> choice;

                              // Set precision for output
                              cout << fixed << setprecision(3);

                              // Calculate based on the user's choice
                              switch (choice)
                              {
                              case 1:
                                        cout << "Sine of " << angle_degrees << " degrees: " << sin(angle_radians) << endl;
                                        break;
                              case 2:
                                        cout << "Cosine of " << angle_degrees << " degrees: " << cos(angle_radians) << endl;
                                        break;
                              case 3:
                                        cout << "Tangent of " << angle_degrees << " degrees: " << sin(angle_radians) * 1 / cos(angle_radians) << endl;
                                        break;

                              default:
                                        cout << "Invalid choice! Please enter 1, 2, or 3." << endl;
                              }
                              break;
                    default:
                              run = false;
                              break;
                    }
          }
          return 0;
}