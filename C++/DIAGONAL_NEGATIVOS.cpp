#include <bits/stdc++.h>

using namespace std;


int main () {




int n, s, i, j;


cout << "Qual a ordem da matriz? ";
cin >> n;


int mat[n][n];



for (i=0; i<n; i++){

        for (j=0; j<n; j++){

    cout << "Elemento [" << i << "," << j <<"]: ";
    cin >>  mat[i][j];

        }
}


cout << "DIAGONAL PRINCIAL: "<< endl;

for (i=0; i<n; i++){

    cout << mat[i][i] << " ";

}

 s = 0;
for (i=0; i<n; i++){

        for (j=0; j<n; j++){

    if (mat[i][j] < 0){

        s++;
    }

        }
}


cout << "\nQUANTIDADE DE NEGATIVOS = " << s << endl;


return 0;

}
