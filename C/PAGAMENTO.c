#include <stdio.h>
#include <string.h>


void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");

}


int main ()
{



    double vp, ht, p;
    char n [50];


    printf("Nome: ");
    ler_texto (n, 50);

    printf("Valor por hora: ");
    scanf("%lf", &vp);

    printf("Horas trabalhadas: ");
    scanf("%lf", &ht);

    p = vp * ht;

    printf("O pagamento de %s", n);
    printf(" deve ser  %.2lf", p);




    return 0;



}
