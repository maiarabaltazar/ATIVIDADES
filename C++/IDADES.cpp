#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;

int main () {


string n1, n2;
int i1, i2;
double m;



cout << "Dados da primeira pessoa: \n";
cout << "NOME: ";
getline(cin, n1);
cout << "IDADE: ";
cin >> i1;


cout << "Dados da segunda pessoa: \n";
cout << "NOME: ";
cin.ignore(INT_MAX, '\n');
getline (cin, n2);
cout << "IDADE: ";
cin >> i2;


m = (double) (i1 + i2) / 2;

cout << fixed << setprecision (1);

cout << "A idade media de " << n1 << " e " << n2 << " e de " << m << " anos. ";









return 0;

}
