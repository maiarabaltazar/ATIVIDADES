#include <stdio.h>
#include <string.h>


int main () {


double d, cg, cm;



printf("Distancia percorrida: ");
scanf("%lf", &d);
printf("Combustivel gasto: ");
scanf("%lf", &cg);


cm = d/cg;

printf("Consumo medio %.2lf", cm);

return 0;


}
