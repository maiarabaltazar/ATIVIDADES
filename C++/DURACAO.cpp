#include <bits/stdc++.h>



using namespace std;



int main (){



int h, m, resto, st, s;



cout << "Digite a duracao em segundos: ";
cin >> st;



h =  st / 3600;
resto = st % 3600;
m = resto / 60;
s = resto % 60;


cout << h << ":" << m << ":" << s << endl;



return 0;

}
