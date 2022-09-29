#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
 
    int a;

    printf("Qual numero estou pensando?\n");
    scanf("%d",&a);

        while(a!=69){
        printf("Voce errou :). Tente de novo:\n");
        scanf("%d",&a);

        if(a==69){

        printf("Voce acertou :P!\n");
        break;

            }

        }
    
    system("pause"); 
    return 0;
}