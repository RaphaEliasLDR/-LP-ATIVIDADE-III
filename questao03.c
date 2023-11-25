#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

int i;
char nome [3][200];
int telefone [3];
int condicao = 0;

do{
printf ("\nInforme o nome: ");
gets (nome[i]);

printf ("\nInfome o telefone: ");
scanf ("%d", &telefone[i]);

printf ("\nDeseja acrescentar mais um telefone? (1 - sim | 0 - Não) ");
scanf ("%d", &condicao);

if (condicao == 0){
    for (i = 0; i < 3; i++){
        printf ("\nNome do contato: %s", nome[i]);
        printf ("\nTelefone: %i", telefone[i]);
    }
}

 fflush (stdin); 
}while (condicao == 1);


return 0;
}
