int Basic_ops() {
  cout<<"Welcome to The Specialized Calculator!"<<endl;
  cout<<"This calculator can perform basic operations such as addition, subtraction, multiplication, and division."<<endl;
  cout<<"It can also perform additional functions such as square root and power."<<endl;
  cout<<"Do you want to perform basic operations? (yes=y, no=n): ";
  char BasicFunction;
  cin >> BasicFunction;

  if(BasicFunction=='y'||BasicFunction=='Y'){
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

  }

}