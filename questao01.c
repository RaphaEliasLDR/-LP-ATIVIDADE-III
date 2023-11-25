#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

char nome[3] [200];
int idade[3];
float peso[3];
float altura[3];
int maiorIdade = 0;
int menorIdade = 9999;
float maiorAltura = 0;
float menorAltura = 9999;
float maiorPeso = 0;
float menorPeso = 9999;
int i;


    for (i = 0; i < 3; i++){
        printf("\n\nInforme seu nome: ");
        gets(nome[i]);

        printf("Informe sua idade: ");
        scanf("%d", &idade[i]);

        printf("Informe seu peso: ");
        scanf("%f", &peso[i]);

        printf("Informe sua altura: ");
        scanf("%f", &altura[i]);


        maiorIdade = idade [i] > maiorIdade ? idade [i] : maiorIdade;
        menorIdade = idade [i] < menorIdade ? idade [i] : menorIdade;

        maiorAltura = altura [i] > maiorAltura ? altura [i] : maiorAltura;
        menorAltura = altura [i] < menorAltura ? altura [i] : menorAltura;

        maiorPeso = peso [i] > maiorPeso ? peso [i] : maiorPeso;
        menorPeso = peso [i] < menorPeso ? peso [i] : menorPeso;
        
        fflush (stdin);
    }

	system ("cls");

 	for (i = 0; i < 3; i++){
 		printf ("\nNome da %dº pessoa: %s", i+1, nome [i]);
	 }

	printf ("\n\nInformações: ");

        printf ("\n\nMaior idade: %d", maiorIdade);
        printf ("\nMenor idade: %d", menorIdade);
    
        printf ("\n\nMaior Altura: %.2f m", maiorAltura);
        printf ("\nMenor Altura: %.2f m", menorAltura);

        printf ("\n\nMaior peso: %.2f kg", maiorPeso);
        printf ("\nMenor peso: %.2f kg", menorPeso);

    
    return 0;
}
