#include <iostream>
#include <cmath>
using namespace std;

double num1, num2, result;
int choice;

void add() {
  cout << "You picked Addition" << endl;
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;
  result = num1 + num2;
  cout << "Result is " << result << endl;
}

void subtract() {
  cout << "You picked Subtraction" << endl;
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;
  result = num1 - num2;
  cout << "Result is: " << result << endl;
}

void multiply() {
  cout << "You picked Multiplication" << endl;
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;
  result = num1 * num2;
  cout << "Result is: " << result << endl;
}

void division(){
  cout << "You picked Division" << endl;
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;
  result = num1 / num2;
  cout << "Result is: " << result << endl;
}

void power(){
  cout << "You picked Power" << endl;
    cout << "Enter base number: ";
    cin >> num1;
    cout << "Enter exponent number: ";
    cin >> num2;
    result = pow(num1, num2);
    cout << "Result is: " << result << endl;
}

void squared(){
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

void absol() {
  cout << "You picked ABS" << endl;
    cout << "Enter a number: ";
    cin >> num1;
    result = abs(num1);
    cout << "Result is: " << result << endl;
}

void floor_calc() {
  cout << "You picked Floor" << endl;
  cout << "Enter a number: ";
  cin >> num1;
  result = floor(num1);
  cout << "Result is: " << result << endl;
}

void ceil_calc(){
  cout << "You picked Ceiling" << endl;
  cout << "Enter a number: ";
  cin >> num1;
  result = ceil(num1);
  cout << "Result is: " << result << endl;
}

void factorial() {
  cout << "You picked Factorial" << endl;
  cout << "Enter a positive number: ";
  cin >> num1;
  //loop that counts and adds up every positive number before the inputed number
  double n = num1, result = 1, i;
  for (i = 1; i<=n; i++)
    result = result * i;
  cout << "Factorial of " << num1 << " is " << result<< endl;
}

int main() {

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
  
  switch (choice) {
    case 1:
      add();
      break;
    case 2:
      subtract();
      break;
    case 3:
      multiply();
      break;
    case 4:
      division();
      break;
    case 5:
      power();
      break;
    case 6:
      squared();
      break;
    case 7:
      absol();
      break;
    case 8:
      floor_calc();
      break;
    case 9:
      ceil_calc();
      break;
    case 10:
      factorial();
      break;
    default:
      cout << "Enter valid input" << endl;
      break; 
  }
  
  return 0;
}
