#include <stdio.h>




int main ()
{



    int n1, n2, i, s, maior, menor;



    printf("Digite dois numeros:\n ");
    scanf("%d %d", &n1, &n2);


    if (n1>n2)
    {

        maior = n1;
        menor = n2;
    }

    else
    {
        maior = n2;
        menor = n1;
    }

    s = 0;

    for (i = menor+1; i<= maior-1; i++)
    {

        if (i % 2 != 0 )
        {

            s = s + i;

        }


    }


    printf("SOMA DOS IMPARES = %d", s);


    return 0;


}
