#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float fValue = 76.4;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << fixed << fValue << endl;
    cout << scientific << fValue << endl;
    cout << setprecision(20) << fixed << fValue << endl;

    double dValue = 76.4;
    cout << setprecision(20) << fixed << dValue << endl;

    long double lValue = 123.456789876543210;
    cout << setprecision(20) << fixed << lValue << endl;
    cout << "Size of long double: " << sizeof(lValue) << endl;
    return 0;
}
