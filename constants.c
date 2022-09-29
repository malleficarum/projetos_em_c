#include<stdio.h>
#include <stdlib.h>
//variables

const int num = 5; //constante variable that can't be changed

int main ()
//input
{

    printf("%d\n",num);

    num = 8;
    printf("%d\n",num);

    /*

    printf("%d\n",70); is also considered a constant
    printf("hello"); also contant.

    */

    system("pause"); 
    return 0;
}