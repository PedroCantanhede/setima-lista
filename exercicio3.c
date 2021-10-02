//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int numero1, numero2, numero3;
    int aux;

    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &numero3);

    if (numero1 > numero2)
    {
        aux = numero1;
        numero1 = numero2;
        numero2 = aux;
    }

    if (numero2 <= numero3)
    {
        printf("\n\n-=-=-=- Ordem Crescente -=-=-=- \n- %d \n- %d \n- %d \n\n", numero1, numero2, numero3);
    }
    else
    {
        if (numero1 <= numero3)
        {
            printf("\n\n-=-=-=- Ordem Crescente -=-=-=- \n- %d \n- %d \n- %d \n\n", numero1, numero3, numero2);
        }
        else
        {
            printf("\n\n-=-=-=- Ordem Crescente -=-=-=- \n- %d \n- %d \n- %d \n\n", numero3, numero1, numero2);
        }
    }

    return 0;
}