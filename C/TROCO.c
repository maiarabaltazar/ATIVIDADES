#include <stdio.h>
#include <string.h>

int main ()
{



    double p, d, t;
    int q;


    printf("Preco unitario do produto: ");
    scanf("%lf", &p);
    printf("Quantidade comprada: ");
    scanf("%d", &q);
    printf("Dinheiro recebido: ");
    scanf("%lf", &d);


    t = d - (p * q);

    printf("Troco: %.2lf", t);





    return 0;


}
