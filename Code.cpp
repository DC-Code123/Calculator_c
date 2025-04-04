//Yoooo This should work
#include <iostream>
#include <string>
#include <sstream>

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
   return x / y;
}


int main(){
  int x, y;
  char op;
  cout << "Enter first number: ";
  cin >> x;
  cout << "Enter second number: ";
  cin >> y;
  cout << "which operation do you want to perform?: ";
  cout << "Do you want to perform addition? (yes=y, no=n)";
  cin >> op;
  if (op == 'y' || op == 'Y') {
    cout << "The sum of " << x << " and " << y << " is: " << add(x, y) << endl;
    int z = add(x, y);
  }
  else {
    cout << "Do you want to perform subtraction? (yes=y, no=n)";
    cin >> op;
    if (op == 'y' || op == 'Y') {
      cout << "The difference of " << x << " and " << y << " is: " << sub(x, y) << endl;
      int z = sub(x, y);
    }
    else {
      cout << "Do you want to perform multiplication? (yes=y, no=n)";
      cin >> op;
      if (op == 'y' || op == 'Y') {
        cout << "The product of " << x << " and " << y << " is: " << multi(x, y) << endl;
        int z = multi(x, y);
      }
      else {
        cout << "Do you want to perform division? (yes=y, no=n)";
        cin >> op;
        if (op == 'y' || op == 'Y') {
          cout << "The quotient of " << x << " and " << y << " is: " << div(x, y) << endl;
          int z = div(x, y);
          int remainder = x % y;
          cout << "The remainder of " << x << " and " << y << " is: " << remainder << endl;
        }
        else {
          cout << "Invalid operation" << endl;
        }
      }
    }
  }
  return 0;
}