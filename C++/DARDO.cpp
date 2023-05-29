#include <bits/stdc++.h>



using namespace std;



int main () {



double d1, d2, d3, m;


m = 0;


cout << "Digite as tres distancias: " << endl;
cin >> d1;

if (d1 > m) {

    m = d1;
}

cin >> d2;

if (d2 > m) {

    m = d2;
}

cin >> d3;

if (d3 > m) {

    m = d3;
}


cout << "MAIOR DISTANCIA = " << m << endl;


return 0;

}
