
#include <stdio.h>


int main ()
{

    double l, c, vm, a, p;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &l);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &c);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &vm);

    a = l * c;
    p = a * vm;

    printf("Area do terreno = %.2lf\n", a);

    printf("Preco do terreno = %.2lf", p);

    return 0;

}
