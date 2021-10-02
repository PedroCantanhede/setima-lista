//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int i = 0;
    int vetorA[10];
    int vetorB[10];
    int vetorC[10];

    printf("\n\n-=-=-=- Array A -=-=-=- \n");

    for (i; i < 10; i++)
    {

        printf("Informe o valor %d: ", i + 1);

        scanf("%d", &vetorA[i]);
    }

    printf("\n\n-=-=-=- Array B -=-=-=- \n");

    for (i = 0; i < 10; i++)
    {

        printf("Informe o valor %d: ", i + 1);

        scanf("%d", &vetorB[i]);
    }

    printf("\n\n-=-=-=- Array C (A - B) -=-=-=- \n");

    for (i = 0; i < 10; i++)
    {

        vetorC[i] = vetorA[i] - vetorB[i];

        printf("| %d |\n", vetorC[i]);
    }

    return 0;
}