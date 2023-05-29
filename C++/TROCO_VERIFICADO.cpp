#include <bits/stdc++.h>



using namespace std;



int main (){




double pu, dr, t, f, vr;
int q;


cout << "Preço unitário do produto: ";
cin >> pu;
cout << "Quantidade comprada: ";
cin >> q;
cout << "Dinheiro recebido: ";
cin >> dr;


vr = pu * q;

cout << fixed << setprecision (2);
if (dr < vr) {

    f = vr - dr;
    cout << "DINHEIRO INSUFICIENTE. FALTAM " << f << " REAIS." << endl;

}

else {

    t = dr - vr;
    cout << "TROCO = " << t << " REAIS." << endl;

}


return 0;

}
