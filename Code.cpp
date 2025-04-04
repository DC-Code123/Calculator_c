//Yoooo This should work
#include <iostream>
#include <string>
#include <sstream>
#include <cmath> 

using namespace std;

int add(int x, int y) {
  return x + y;
}

int sub(int x, int y) {
  return x - y;
}

int multi(int x, int y) {
  return x * y;
}

int div(int x, int y) {
  if (y == 0) {
    cout << "Error: Division by zero is not allowed." << endl;
    return 0; // Return 0 to indicate an error
  }
  return x / y;
}

string div_print(int x, int y) {
  if (y == 0) {
    return "Error: Division by zero is not allowed.";
  }
  int quotient = x / y;
  int remainder = x % y;
  stringstream ss;
  ss << "The quotient of " << x << " and " << y << " is: " << quotient
     << ", and the remainder is: " << remainder;
  return ss.str();
}

int main() {
  int x, y;
  char op;
  cout << "Enter first number: ";
  cin >> x;
  cout << "Enter second number: ";
  cin >> y;

  cout << "Which operation do you want to perform?" << endl;
  cout << "Do you want to perform addition? (yes=y, no=n): ";
  cin >> op;

  if (op == 'y' || op == 'Y') {
    cout << "The sum of " << x << " and " << y << " is: " << add(x, y) << endl;
  } 
    else {
    cout << "Do you want to perform subtraction? (yes=y, no=n): ";
    cin >> op;
    if (op == 'y' || op == 'Y') {
      cout << "The difference of " << x << " and " << y << " is: " << sub(x, y) << endl;
    } 
    else {
      cout << "Do you want to perform multiplication? (yes=y, no=n): ";
      cin >> op;
      if (op == 'y' || op == 'Y') {
        cout << "The product of " << x << " and " << y << " is: " << multi(x, y) << endl;
      } 
      else {
        cout << "Do you want to perform division? (yes=y, no=n): ";
        cin >> op;
        if (op == 'y' || op == 'Y') {
          if (y != 0) {
            cout << div_print(x, y) << endl;
          } 
          else {
            cout << "Error: Division by zero is not allowed." << endl;
          }
        } 
        else {
          cout << "Invalid operation" << endl;
        }
      }
    }
  }
  char AdditionalFunction;
  cout<<"Are you interested in performing additional functions? (yes=y, no=n): ";
  cin>> AdditionalFunction;
  if (AdditionalFunction == 'y'||AdditionalFunction == 'Y'){
    void AdditionalFunction()
  }
  else{
    cout<<"Thank you for using the calculator!"<<endl;
    return 0;
  }

  return 0;
}
void 