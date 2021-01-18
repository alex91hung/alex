#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "input 3 different integers\n";
    cin >> a >> b >> c;
    cout << "sum is " << a + b + c << endl;
    cout << "average is " << (a + b + c) / 3 << endl;
    cout << "product is " << a * b * c << endl;
}