
#include <stdio.h>


int main()
{

    int id1, id2 ;
    char n1 [50], n2[50];
    double media;


    printf("Dados da primeira pessoa: \n");
    printf("Nome: ");
    gets(n1);
    printf("Idade: ");
    scanf("%d", &id1);

    printf("Dados da segunda pessoa: \n");
    printf("Nome: ");
    fseek(stdin, 0, SEEK_END);
    gets(n2);
    printf("Idade: ");
    scanf("%d", &id2);

    media = (double)(id1 + id2) / 2;

    printf("A idade media de %s e %s e de %.1lf anos", n1, n2, media);


    return 0;


}



