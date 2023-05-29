#include <stdio.h>


int main (){


int a, b, c, menor;

menor = 1000000;

printf("Primeiro valor: ");
scanf("%d", &a);

if (a<menor) {

    menor = a;
}

printf("Segundo valor: ");
scanf("%d", &b);

if (b<menor) {

    menor = b;
}

printf("Terceiro valor: ");
scanf("%d", &c);

if (c<menor) {

    menor = c;
}


printf("MENOR = %d", menor);


return 0;



}
