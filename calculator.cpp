#include <iostream>
#include <cmath>
using namespace std;

int main() {

  double num1, num2, result, choice;

  cout << "1.Addition" << endl;
  cout << "2.Subtraction" << endl;
  cout << "3.Multiplication" << endl;
  cout << "4.Division" << endl;
  cout << "5.Power" << endl;
  cout << "6.Square Root" << endl;
  cout << "7.ABS" << endl;
  cout << "8.Floor" << endl;
  cout << "9.Ceiling" << endl;
  cout << "10.Factorial" << endl << endl;
  cout << "Enter your choice. Pick(1/10): ";
  cin >> choice; 

  if (choice == 1) {
    cout << "You picked Addition" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    result = num1 + num2;
    cout << "Result is " << result << endl;
  }
  else if (choice == 2) {
    cout << "You picked Subtraction" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    result = num1 - num2;
    cout << "Result is: " << result << endl;
  }
  else if (choice == 3) {
    cout << "You picked Multiplication" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    result = num1 * num2;
    cout << "Result is: " << result << endl;
  }
  else if (choice == 4) {
    cout << "You picked Division" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    result = num1 / num2;
    cout << "Result is: " << result << endl;
  }
  else if (choice == 5) {
    cout << "You picked Power" << endl;
    cout << "Enter base number: ";
    cin >> num1;
    cout << "Enter exponent number: ";
    cin >> num2;
    result = pow(num1, num2);
    cout << "Result is: " << result << endl;
  }
  else if (choice == 6) {
    cout << "You picked Square" << endl;
    cout << "Enter a number: ";
    cin >> num1;
      if (num1 >= 0) {
        result = sqrt(num1);
        cout << "Result is: " << result << endl;
      }
      else {
        cout << "Invalid number";
      } 
  }
  else if (choice == 7) {
    cout << "You picked ABS" << endl;
    cout << "Enter a number: ";
    cin >> num1;
    result = abs(num1);
    cout << "Result is: " << result << endl;
  }
  else if (choice == 8) {
    cout << "You picked Floor" << endl;
    cout << "Enter a number: ";
    cin >> num1;
    result = floor(num1);
    cout << "Result is: " << result << endl;
  }
  else if (choice == 9) {
    cout << "You picked Ceiling" << endl;
    cout << "Enter a number: ";
    cin >> num1;
    result = ceil(num1);
    cout << "Result is: " << result << endl;
  }
  else if (choice == 10) {
    cout << "You picked Factorial" << endl;
    cout << "Enter a positive number: ";
    cin >> num1;
    //loop that counts and adds up every positive number before the inputed number
    double n = num1, result = 1, i;
    for (i = 1; i<=n; i++)
      result = result * i;
    cout << "Factorial of " << num1 << " is " << result << endl;
  }
  //If input wasn't a number this prints error message
  else {
    cout << "Enter valid input" << endl;
  }
  return 0;
}
