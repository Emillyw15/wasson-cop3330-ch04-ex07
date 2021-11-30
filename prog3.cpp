#include <iostream>
#include "prog3.h"
#include "std_lib_facilities.h"
#include <vector>
using namespace std;

int main()
{
    double op1, op2;
    string operation, a, b;
    vector<string> written = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> single = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    cout << "Enter the operation. ";
    cin >> operation >> a >> b;

    op1 = digit(a);
    op2 = digit(b);

    if (operation == "+") {
        cout << "Adding " << op1 << " and " << op2 << " calculates to " << (op1 + op2);
    } else if (operation == "-") {
        cout << "Subtracting " << op1 << " and " << op2 << " calculates to " << (op1 - op2);
    } else if (operation == "/") {
        cout << "Dividing " << op1 << " and " << op2 << " calculates to " << (op1 / op2);
    } else if (operation == "*") {
        cout << "Multiplying " << op1 << " and " << op2 << " calculates to " << (op1 * op2);
    } else {
        cout << "Invalid operation.";
    }

    return 0;
}

double digit(string a) {
    if (a.length() == 1) {
        return stoi(a);
    } else {
        if (a == "zero")
            return 0;
        else if (a == "one")
            return 1;
        else if (a == "two")
            return 2;
        else if (a == "three")
            return 3;
        else if (a == "four")
            return 4;
        else if (a == "five")
            return 5;
        else if (a == "six")
            return 6;
        else if (a == "seven")
            return 7;
        else if (a == "eight")
            return 8;
        else if (a == "nine")
            return 9; 
    }

    return -1;
}
