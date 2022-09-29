#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// data types das variaveis.
float a,a2,n,n2,aps,med;

int main ()
// entrada.
{
    printf("A1:\n"); // entrada da nota A1
    scanf("%f",&a);

    n=a*0.4; // calculo aplicando o peso 0.4 p/ a nota A1

    printf("N1 = %.2f\n",n); // saída A1 após o calculo

    printf("A2:\n"); // entrada da nota A2
    scanf("%f",&a2);

    printf("APS:\n"); // entrada da APS
    scanf("%f",&aps);

    n2=(a2*0.6)+(aps*0.1)*0.6; // calculo final da nota.

    printf("Sua N2 e %.2f\n",n2); // calculo com o peso da A2 + APS
  
    med=n+n2; // calculo da nota final
    // saída + status de aprovação
    if(med<6){
        printf("Media final: %.2f. EXAME.\n",med); 

    }
    else {
        printf("Media final: %.2f. APROVADO.\n",med);
    }

    system("pause"); 
    return 0;
}
