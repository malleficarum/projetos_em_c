#include<stdio.h>
#include <stdlib.h>
//variables

char name[50]; // string de caracteres.
int age; // numeros inteiros.
float height; // numeros reais.
char grade; // unico caractere

int main ()
// entrada de dados.
{

    printf("Input your name:");
    scanf("%c",&name);

    printf("Your name is %c.\n",name);

    system("pause"); 
    return 0;
}
