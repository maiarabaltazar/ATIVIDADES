#include <stdio.h>



int main ()
{


    int n, i, qmenor;
    double med, altotal, p;


    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);


    char nome[n] [50];
    int id[n];
    double alt[n];

    printf("\n");

    altotal = 0;

    for (i = 0; i < n; i++)
    {

        printf("Dados da %da pessoa \n", i+1);
        printf("NOME: ");
        fseek(stdin, 0, SEEK_END);
        gets(nome[i]);
        printf("IDADE: ");
        scanf("%d", &id[i]);
        printf("ALTURA: ");
        scanf("%lf", &alt[i]);
        printf("\n");
        altotal = altotal + alt[i];

    }


    qmenor = 0;

    for (i=0; i<n; i++)
    {

        if (id[i] < 16)
        {
            qmenor = qmenor + 1;
        }

    }


    med = (double) altotal / n;
    p = (double) qmenor * 100 / n;

    printf("Altura media: %.2lf\n", med);
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", p);

    for (i=0; i<n; i++)
    {

        if (id[i]<16)
        {

            printf("%s\n", nome[i]);
        }

    }




    return 0;


}
