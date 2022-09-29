#include<stdio.h>
#include <stdlib.h>
//variables

char name[50]; //string of characters bc there's brackets lol
int age; //whole numbers
float height; //decimal numbers
char grade; //single character

int main ()
//input
{

    printf("Input your name:");
    scanf("%c",&name);

    printf("Your name is %c.\n",name);

    system("pause"); 
    return 0;
}