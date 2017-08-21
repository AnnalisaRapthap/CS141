#include <iostream>

using namespace std;

int main()
{
    double r,d,c,a;
    cout << "Enter the radius of a circle=" << endl;
    cin >> r;
    d=2*r;
    c=2*3.14*r;
    a=3.14*r*r;
    cout << "Diameter=" << d << endl << "Circumference=" << c << endl << "Area=" << a << endl;
    return 0;
}
