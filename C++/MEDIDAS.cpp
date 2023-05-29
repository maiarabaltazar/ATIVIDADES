#include <bits/stdc++.h>




using namespace std;



int main (){



double a, b, c, aq, atri, atra;




cout << "Digite a medida A: ";
cin >> a;
cout << "Digite a medida B: ";
cin >> b;
cout << "Digite a medida C: ";
cin >>c;



aq = pow (a,2);
atri = (a * b) / 2;
atra = ((a + b) * c) / 2;

cout << fixed << setprecision (4);
cout << "AREA DO QUADRADO = " << aq << endl;
cout << "AREA DO TRIANGULO = " << atri << endl;
cout << "AREA DO TRAPEZIO = " << atra << endl;


return 0;


}
