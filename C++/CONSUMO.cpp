#include <bits/stdc++.h>




using namespace std;



int main (){



double d, cg, cm;



cout << "Distancia percorrida: ";
cin >> d;
cout << "Combustível gasto: ";
cin >> cg;



cm = d/cg;

cout << fixed << setprecision(3);
cout << "Consumo medio = " << cm << endl;



return 0;

}
