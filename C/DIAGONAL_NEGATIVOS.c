#include <stdio.h>



int main ()
{


    int n, i, j, qtd;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);


    int mat [n] [n];


    for (i=0; i<n; i++)
    {


        for (j=0; j<n; j++)
        {

            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);

        }

    }


    printf("\nDIAGONAL PRINCIPAL\n");

    for (i = 0; i<n; i++)
    {

        printf("%d ", mat[i][i]);

    }

    qtd = 0;

    for (i=0; i<n; i++)
    {


        for (j=0; j<n; j++)
        {

            if (mat[i][j] < 0)
            {

                qtd++;
            }

        }

    }



    printf("\nQUANTIDADE DE NEGATIVOS = %d\n", qtd);


    return 0;

}
