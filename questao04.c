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
    printf ("\nInforme o %d� n�mero: ", i+1);
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



    printf ("\nQuantidade de n�meros pares: %d", pares);
    printf ("\nQuantidade de n�meros impares: %d", impares);
    printf ("\nM�dia dos n�meros pares informados: %.2f", mediaPares);

    printf ("\n\nQuantidade de n�meros positivos: %d", positivos);
    printf ("\nQuantidade de n�meros negativos: %d", negativos);
    printf ("\n\nM�dia dos n�meros informados: %.2f", media);

    printf ("\n\nMaior n�mero informado: %d", maiorNum);
    printf ("\nMenor n�mero informado: %d", menorNum); 


return 0;
}
