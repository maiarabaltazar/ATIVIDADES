#include <stdio.h>



int main ()
{

    int n, i;
    double s, m;



    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    s = 0;

        for (i=0; i<n; i++)
    {


        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
        s = s + vet[i];

    }


    printf("VALORES = ");

    for (i=0; i<n; i++)
    {

        printf("%.1lf ", vet[i]);


    }

   printf("\n");

    printf("SOMA = %.2lf\n", s);

    m = s/n;

    printf("MEDIA = %.2lf", m);


return 0;

}
