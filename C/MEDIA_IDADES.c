#include <stdio.h>




int main ()
{



    int id, s, qt;
    double m;


    printf("Digite as idades:\n");
    scanf("%d", &id);

    s = 0;
    qt = 0;


    while (id>=0)
    {

        s = s + id;
        qt = qt + 1;

        scanf("%d", &id);

    }


    if (qt > 0)
    {

        m = (double) s/qt;

        printf("MEDIA = %.2lf", m);
    }

    else
    {

        printf("IMPOSSIVEL CALCULAR");

    }



    return 0;



}
