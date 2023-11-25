#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

int i;
int numero[5];
int positivos = 0;
int negativos = 0;
int pares = 0;
int impares = 0;
float somaNumero = 0;
float media;
float somaPares = 0;
float mediaPares;
int maiorNum = 0;
int menorNum = 9999;


for (i = 0; i < 5; i++){
    printf ("\nInforme o %dº número: ", i+1);
    scanf ("%d", &numero[i]);
    somaNumero += numero [i];

    if (numero [i] % 2 == 0){
        somaPares += numero[i];
        pares++;

    }else{
        impares++;
    }

    if (numero [i] > 0){
        positivos++;
    }else{
        negativos++;
    }

    maiorNum = numero[i] < maiorNum ? maiorNum : numero [i];
    menorNum = numero[i] > menorNum ? menorNum : numero [i];

}

mediaPares = somaPares / pares;
media = somaNumero / i;



    printf ("\nQuantidade de números pares: %d", pares);
    printf ("\nQuantidade de números impares: %d", impares);
    printf ("\nMédia dos números pares informados: %.2f", mediaPares);

    printf ("\n\nQuantidade de números positivos: %d", positivos);
    printf ("\nQuantidade de números negativos: %d", negativos);
    printf ("\n\nMédia dos números informados: %.2f", media);

    printf ("\n\nMaior número informado: %d", maiorNum);
    printf ("\nMenor número informado: %d", menorNum); 


return 0;
}
