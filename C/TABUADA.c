#include <stdio.h>



int main ()
{


    int n, i, r;


    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);



    for (i = 1; i <= 10; i++)
    {

        r = n * i;
        printf("%d X %d = %d\n", n, i, r);



    }




    return 0;



}
