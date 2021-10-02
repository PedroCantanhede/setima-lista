//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int i = 0, numeros, soma = 0;
    float media = 0;

    for (i; i < 15; i++)
    {
        printf("Informe a nota do %d aluno: ", i + 1);
        scanf("%d", &numeros);

        soma = soma + numeros;
    }

    media = soma / 15;

    printf("\n\n-=-=-=- Media dos alunos -=-=-=- \n- %.2f\n", media);

    return 0;
}