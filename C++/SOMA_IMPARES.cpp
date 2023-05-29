#include <iostream>
#include <iomanip>



using namespace std;



int main ()
{


    int n1, n2, s, maior, menor, i;


    cout << "Digite dois numeros: \n";
    cin >> n1;
    cin >> n2;

    if (n1 < n2)
    {

        menor = n1;
        maior = n2;
    }
    else if (n2<n1)
    {
        menor = n2;
        maior = n1;
    }

    s = 0;

    for (i = menor+1; i<maior; i++)
    {

        if (i % 2 != 0)
        {

            s = s + i;
        }
    }



    cout << "Soma dos numeros impares entre " <<menor<< " e " << maior << " = " << s << endl;


    return 0;

}
