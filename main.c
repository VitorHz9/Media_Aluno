#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome [50];
    float nota1, nota2, media;

    printf ("Digite o nome do aluno: ");
    scanf (" %s", &nome);

    printf ("Digite a primeira nota: ");
    scanf ("%f", &nota1);

    printf ("Digite a segunda nota: ");
    scanf ("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf ("\nAluno: %s\n", nome);
    printf ("Media: %.2f\n", media);

    if (media >= 7.0) {
        printf ("Resultado: Aprovado!\n");
    } else if (media >= 5.0) {
        printf ("Resultado: Recuperacao!\n");
    } else {
        printf ("Resultado: Reprovado!\n");
    }

    return 0;


}
