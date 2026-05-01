#include <iostream>
using namespace std;

int main() {
    float a, b;  // int ki jagah float kar diya
    char op;
    
    cout << "Enter first Number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operator(+,-,*,/): ";
    cin >> op;
    
    if(op == '+')
        cout << "Result = " << (a+b) << endl;
    else if(op == '-')
        cout << "Result = " << (a-b) << endl;
    else if(op == '*')
        cout << "Result = " << (a*b) << endl;
    else if(op == '/') {
        if(b == 0)  // Zero se divide check kar liya
            cout << "Error: Cannot divide by zero!" << endl;
        else
            cout << "Result = " << (a/b) << endl;
    }
    else
        cout << "Error: Invalid operator!" << endl;
    
    return 0;
}
}
