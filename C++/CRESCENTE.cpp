#include <iostream>
#include <iomanip>



using namespace std;


int main ()
{


    int n1, n2;


    cout << "Digite dois numeros \n";
    cin >> n1;
    cin >> n2;

    if (n1 < n2)
    {

        cout << "CRESCENTE\n";

    }

        else if (n1 > n2)
        {

            cout << "DECRESCENTE\n";
        }



    while (n1 != n2)
    {

        cout << "Digite dois numeros \n";
        cin >> n1;
        cin >> n2;

        if (n1 < n2)
        {

            cout << "CRESCENTE\n";
        }

            else if (n1 > n2)
            {

                cout << "DECRESCENTE\n";
            }
    }



    return 0;

}
