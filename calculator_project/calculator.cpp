#include <iostream>
using namespace std;

int main()
{
    double a;
    double b;
    double result;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    result = a + b;

    cout << "The sum of " << a << " and " << b << " is: " << result << endl;

    return 0;
}