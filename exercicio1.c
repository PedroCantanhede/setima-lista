//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int numeros[3], soma, i = 0;

    for (i; i < 3; i++)
    {
        printf("Informe o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        numeros[i] = numeros[i] * numeros[i];
    }

    soma = numeros[0] + numeros[1] + numeros[2];
    printf("\n\n A soma dos quadrads tem como resultado: %d \n\n", soma);

    return 0;
}