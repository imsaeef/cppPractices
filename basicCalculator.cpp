/**

practice with SAEEF
language: C++

*/

#include <iostream>
using namespace std;

//start main function
int main()
{
    //start code
    //welcome line
    cout << "*************************\n";
    cout << "*      Calculator       *\n";
    cout << "*************************\n";
    cout << "\n";

    //declare variables
    int x;
    int y;
    int add;
    int sub;
    int mult;
    int div;


    //user input
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    //operations
    add = x + y;
    sub = x - y;
    mult = x * y;
    div = x / y;

    //output
    cout << "Addition is: " << add << endl;
    cout << "Subtraction is: " << sub << endl;
    cout << "Multiplication is: " << mult << endl;
    cout << "Division is: " << div << endl;

    cout << "BYE!!!";

    return 0;
}