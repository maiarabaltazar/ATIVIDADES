#include <bits/stdc++.h>

using namespace std;



int main()
{



    double l, c, v, a, p;



    cout << "Digite a largura do terreno: ";
    cin >> l;
    cout << "Digite o comprimento do terreno: ";
    cin >> c;
    cout << "Digite o valor do metro quadrado: ";
    cin >> v;


    a = l * c;
    p = v * a;

    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << a << endl;
    cout << "Preco do terreno = " << p << endl;





    return 0;


}

