#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{


    double b, h, a, p, d;


    cout << "Base do retangulo: ";
    cin >> b;
    cout << "Altura do retangulo: ";
    cin >> h;


    a = b * h;
    p = 2*b + 2*h;
    d = sqrt(pow(b,2.0) + pow(h,2.0));


    cout << fixed << setprecision(4);

    cout << "AREA = " << a << endl;
    cout << "PERIMETRO = " << p << endl;
    cout << "DIAGONAL = " << d << endl;




    return 0;


}
