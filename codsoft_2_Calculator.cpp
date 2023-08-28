#include <bits/stdc++.h>
using namespace std;

void simpleCalc()
{

    double num1, num2;
    cout << "Enter the two numbers to perform operation on : ";
    cin >> num1 >> num2;

    char operation;
    cout << "List of operators is as follows -> " << endl
         << "    +      -      *      / " << endl;
    cout << "Select the operator to perform the operation : ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << "Operator Selected : '+'" << endl;
        cout << "The required result is -> " << num1 << " + " << num2 << " : " << (num1 + num2);
        break;

    case '-':
        cout << "Operator Selected : '-'" << endl;
        cout << "The required result is -> " << num1 << " - " << num2 << " : " << (num1 - num2);
        break;

    case '*':
        cout << "Operator Selected : '*'" << endl;
        cout << "The required result is -> " << num1 << " * " << num2 << " : " << (num1 * num2);
        break;

    case '/':
        cout << "Operator Selected : '/' " << endl;
        cout << "The required result is -> " << num1 << " / " << num2 << " : " << (num1 / num2);
        break;

    default:
        cout << "Oops you selected the wrong operator!" << endl;
        break;
    }
}

int main()
{

    simpleCalc();

    return 0;
}
