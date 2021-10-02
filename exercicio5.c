//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int j = 0, i = 1, h = 0;

    while (i <= 50)
    {
        j = j + 2;
        h = h + j;
        i++;
    }

    printf("\n\n-=-=-=- Soma dos 50 numeros -=-=-=- \n- %d", h);

    return 0;
}