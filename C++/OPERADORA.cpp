#include <bits/stdc++.h>



using namespace std;


int main () {



int m;
double v;


cout << "Digite a quantidade de minutos: ";
cin >> m;


if (m <= 100) {

    v = 50;

}

else {

    v = ((m - 100) * 2) + 50;

}

cout << fixed << setprecision(2);
cout << "Valor a pagar: R$" << v << endl;



return 0;


}
