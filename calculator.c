#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//variables

float a,a2,n,n2,aps,med;

int main ()
//input
{

    printf("Qual sua nota da A1?\n");
    scanf("%f",&a);

    n=a*0.4;

    printf("Sua N1 e %.2f\n",n);

    printf("Qual sua nota da A2?\n");
    scanf("%f",&a2);


    printf("Qual sua nota da sua APS?\n");
    scanf("%f",&aps);

    n2=(a2*0.6)+(aps*0.1)*0.6;

    printf("Sua N2 e %.2f\n",n2);

    med=n+n2;
    if(med<6){
        printf("Sua media final e %.2f. Voce esta de exame.\n",med);

    }
    else {
        printf("Sua media final e %.2f. Voce passou direto.\n",med);
    }

    system("pause"); 
    return 0;
}