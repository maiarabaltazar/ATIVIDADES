#include <bits/stdc++.h>


using namespace std;


int main () {



double v, h, p;
string nome;


 cout << "Nome: ";
 getline (cin, nome);
 cout << "Valor por hora: ";
 cin >> v;
 cout << "Horas trabalhadas: ";
 cin >> h;



 p = v * h;



 cout << "O pagamento para " << nome << " deve ser " << p << " reais." << endl;







return 0;

}
