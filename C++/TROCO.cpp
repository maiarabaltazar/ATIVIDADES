#include <bits/stdc++.h>



using namespace std;



int main (){



double p, d, t;
int q;



cout << "Preço unitário do produto: ";
cin >> p;
cout << "Quantidade comprada: ";
cin >> q;
cout << "Dinheiro recebido: ";
cin >> d;


t = (double) d - (p*q);

cout << "TROCO = " << t << endl;




return 0;

}
