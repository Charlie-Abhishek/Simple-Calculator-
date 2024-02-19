#include <iostream>

using namespace std;

int main() {
    double num1, num2, result ;
    char operation;

    
    cout << "Enter 1st number: ";   // input 
    cin >> num1;

    cout << "Enter 2nd number: ";
    cin >> num2;

    cout << "Choose operation (a : + , b : - , c : * , d : / ): ";
    cin >> operation;
// operation's based on our choice 
    switch (operation) {
        case 'a':
            result = num1 + num2 ;
            break;
        case 'b':
            result = (num1 - num2);
            break;
        case 'c':
            result = num1*num2 ;
            break;
        case 'd':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2 ;
            } 
            else {
                cout << "divisibility by zero is not defined" << endl;
                return 1; 
            }
            break;
        default:
            cout << "Invalid operation." << endl;
            return 1; 
    }

    // required answer 
    cout << "Answer: " << result << endl; 

    return 0;
}
