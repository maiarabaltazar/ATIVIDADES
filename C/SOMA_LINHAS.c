#include <stdio.h>




int main ()
{


    int m, n, i, j;


    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &m);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &n);


    int mat[m][n],vet[m];



    for (i=0; i<m; i++)
    {

        printf("\nDigite os elementos da %da. linha:\n", i+1);

        for (j=0; j<n; j++)
        {

            scanf("%d", &mat[i][j]);

        }

    }

printf("\nVETOR GERADO:\n");

    for (i=0; i<m; i++)
    {

        vet[i] = 0;

        for (j=0; j<n; j++)
        {

            vet[i] = vet[i] + mat[i][j];

        }
        printf("%d\n", vet[i]);
    }






    return 0;

}
