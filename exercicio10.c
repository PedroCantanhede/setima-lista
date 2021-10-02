//Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função Contador de Vogais
int contadorVogais(char string[])
{
    int cont = 0, vogais = 0;

    for (cont; string[cont] != '\0'; cont++)
    {
        if (string[cont] == 'a' || string[cont] == 'A' || string[cont] == 'e' || string[cont] == 'E' || string[cont] == 'i' || string[cont] == 'I' || string[cont] == 'o' || string[cont] == 'O' || string[cont] == 'u' || string[cont] == 'U')
        {
            vogais++;
        }
    }
    return vogais;
}

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    char string[200];
    int i = 0;

    printf("Informe a String: ");
    gets(string);

    printf("Numero de vogais: %d \n", contadorVogais(string));

    // Substituindo as Vogais
    for (i; string[i] != '\0'; i++)
    {
        if (string[i] == 'a' || string[i] == 'A' || string[i] == 'e' || string[i] == 'E' || string[i] == 'i' || string[i] == 'I' || string[i] == 'o' || string[i] == 'O' || string[i] == 'u' || string[i] == 'U')
        {
            string[i] = strlen(string) - 1;
        }
    }

    printf("A string modificada ficou: %s \n", string);

    return 0;
}