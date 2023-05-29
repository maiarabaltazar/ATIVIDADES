#include <stdio.h>


int main ()
{


    double n1, n2, nf;



    printf("Digite a primeira nota: ");
    scanf("%lf", &n1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &n2);


    nf = n1 + n2;


    printf("Nota final = %.1lf\n", nf);



    if (nf >= 60)
    {

        printf("APROVADO");
    }

    else
    {

        printf("REPROVADO");

    }


    return 0;


}
