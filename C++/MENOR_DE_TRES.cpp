#include <iostream>



using namespace std;


int main ()
{

    int n1, n2, n3, menor;

    menor = 10000000;

    cout << "Primeiro valor: ";
    cin >> n1;

    if (menor > n1 )
    {
        menor = n1;
    }

    cout << "Segundo valor: ";
    cin >> n2;

    if (menor > n2)
    {
        menor = n2;
    }

    cout << "Terceiro valor: ";
    cin >> n3;

    if (menor > n3)
    {
        menor = n3;
    }

cout << "MENOR = " << menor << endl;


    return 0;


}
