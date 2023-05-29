#include <stdio.h>
#include <string.h>



int main (){




double a, b, c, aq, atr, atz;



printf ("Digite a medida A: ");
scanf("%lf", &a);
printf ("Digite a medida B: ");
scanf("%lf", &b);
printf ("Digite a medida C: ");
scanf("%lf", &c);


aq = a * a;
atr = a * b / 2;
atz = ((a + b) * c) / 2;

printf("AREA DO QUADRADO = %.4lf\n", aq);
printf("AREA DO TRIANGULO = %.4lf\n", atr);
printf("AREA DO TRAPEZIO = %.4lf", atz);





return 0;


}
