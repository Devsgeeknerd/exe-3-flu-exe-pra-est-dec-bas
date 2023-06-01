#include <stdio.h>
#include <stdlib.h>

void main()
{
    float nota1;
    float nota2;
    float media;

    printf("Digite a nota da primeira avaliação: ");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda avaliação: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A media final e: %0.2f\n", media);

    if (media >= 6)
    {
        printf("Aluno aprovado");
    }
    else
    {
        printf("Aluno reprovado");
    }
    return 0;
}
