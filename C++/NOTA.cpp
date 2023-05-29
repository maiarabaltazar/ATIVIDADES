#include <bits/stdc++.h>


using namespace std;


int main () {



double n1, n2, m;


cout << "Digite a primeira nota: ";
cin >> n1;
cout << "Digite a segunda nota: ";
cin >> n2;


m = n1+n2;



cout << "NOTA FINAL = " << m << endl;



if (m < 60) {

    cout << "REPROVADO!";
}


return 0;



}
