#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

int i, j;
char nome [5][200];
int idade [5];
float nota [5][3];
float somaNotas = 0;
float media[5];
char resultado [5][200];

for (i = 0; i < 5; i++){
    printf ("\n\nInforme o nome do %d� aluno(a): ", i+1);
    gets (nome[i]);

    printf ("Informe a idade do aluno(a): ");
    scanf ("%d", &idade[i]);
    
    for (j = 0; j < 3; j++){
        
        printf ("Infomre a %d� nota do aluno(a): ", j+1);
        scanf ("%f", &nota[i][j]);

        somaNotas += nota[i][j];
    }
 
 media[i] = somaNotas / j;

if (media[i] >= 7 ){
                strcpy (resultado[i], "Aprovado");
                }else if ((media[i] < 7 ) && (media[i] >= 5)){
                    strcpy (resultado[i], "Recupera��o");
                }else if (media[i] < 5){
                    strcpy (resultado[i], "Reprovado");
                }

 somaNotas = 0;
 fflush (stdin);
}

system ("cls");

for (i = 0; i < 5; i++){
    printf ("\n\nNome do aluno(a): %s", nome[i]);
    
    printf ("\nIdade do aluno(a): %d", idade[i]);
    
    for (j = 0; j < 3; j++){
        printf ("\n%d� nota: %.2f", j+1, nota[i][j]);
    }

    printf ("\nM�dia das notas: %.1f", media[i]);
    printf ("\nResultado: %s", resultado[i]);
} 
    


    return 0;
}
