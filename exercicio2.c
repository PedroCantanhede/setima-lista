//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int raio;
    float area, pi = 3.141592;

    printf("Informe o valor do raio do circulo: ");
    scanf("%d", &raio);

    area = raio * raio * pi;

    printf("\n\nA area do circulo eh: %2.2f\n\n", area);

    return 0;
}