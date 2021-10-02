//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int numeros[10], i = 0, maior, menor, soma = 0, somaPar = 0, par = 0;
    float media = 0;

    printf("Informe o numero desejado (Finalize com 0): ");
    scanf("%d", &i);

    numeros[0] = i;
    maior = numeros[0];
    menor = numeros[0];
    i = 0;
    soma += numeros[0];

    while (numeros[i] != 0)
    {
        i++;

        printf("Informe o numero desejado (Finalize com 0): ");
        scanf("%d", &numeros[i]);
        if (numeros[i] == 0)
            break;
        soma += numeros[i];
        if (menor > numeros[i])
        {
            menor = numeros[i];
        }
        if (maior < numeros[i])
        {
            maior = numeros[i];
        }
        if (numeros[i] % 2 == 0)
        {
            somaPar += numeros[i];
            par++;
        }
    }

    media = somaPar / par;

    printf("\n-=-=-=- Dados -=-=-=-");
    printf("\nSoma dos numeros: %d", soma);
    printf("\nQuantidade de numeros: %d", i);
    printf("\nMedia dos numeros: %.d", soma / i);
    printf("\nMaior numero: %d", maior);
    printf("\nMenor numero: %d", menor);
    printf("\nMedia dos numeros pares: %.2f\n\n", media);

    return 0;
}