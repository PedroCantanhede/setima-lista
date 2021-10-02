//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    float altura, peso;

    printf("Informe a altura (m): ");
    scanf("%f", &altura);
    printf("Informe o peso (kg): ");
    scanf("%f", &peso);

    if (altura < 1.20)
    {
        if (peso <= 60)
        {
            printf("\n\n-=-=-=- Pessoa -=-=-=- \n- Classificao: A");
        }
        else
        {
            if (peso > 60 && peso < 90)
            {
                printf("\n\n-=-=-=- Pessoa -=-=-=- \n- Classificao: D");
            }
            else
            {
                printf("\n\n-=-=-=- Pessoa -=-=-=- \n- Classificao: G");
            }
        }
    }
    else
    {
        if (altura >= 1.20 && altura <= 1.70)
        {
            if (peso <= 60)
            {
                printf("\n\n-=-=-=- Pessoa -=-=-=- \n- Classificao: B");
            }
            else
            {
                if (peso > 60 && peso < 90)
                {
                    printf("\n\n-=-=-=- Pessoa -=-=-=- \n- Classificao: E");
                }
                else
                {
                    printf("\n\n-=-=-=- Pessoa -=-=-=- \n- Classificao: H");
                }
            }
        }
        else
        {
            if (peso <= 60)
            {
                printf("\n\n-=-=-=- Pessoa -=-=-=- \n- Classificao: C");
            }
            else
            {
                if (peso > 60 && peso < 90)
                {
                    printf("\n\n-=-=-=- Pessoa -=-=-=- \n- Classificao: F");
                }
                else
                {
                    printf("\n\n-=-=-=- Pessoa -=-=-=- \n- Classificao: I");
                }
            }
        }
    }

    return 0;
}