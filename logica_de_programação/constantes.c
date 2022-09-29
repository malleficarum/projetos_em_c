#include<stdio.h>
#include <stdlib.h>

const int num = 5; // constantes não podem ser alteradas.

int main ()
// entrada
{

    printf("%d\n",num); // saída da variavel num = 5.

    num = 8; // novo parametro da variável.
    printf("%d\n",num); // nova saída.

    /*

    printf("%d\n",70); também é considerado uma constante.
    printf("hello"); também é uma constante.

    */

    system("pause"); 
    return 0;
}
