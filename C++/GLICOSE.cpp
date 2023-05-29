#include <bits/stdc++.h>



using namespace std;



int main ()
{


    double g;


    cout << "Digite a medida da glicose: ";
    cin >> g;


    if (g <= 100)
    {

        cout << "Classificacao = NORMAL.";

    }

    else if (g <= 140)
    {


        cout << "Classificacao = ELEVADO.";
    }


    else
    {

        cout << "Classificacao = DIABETES.";

    }



    return 0;

}
