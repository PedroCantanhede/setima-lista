//Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função
int contadorLetras(char letras[])
{
    int cont = 0;

    while (letras[cont] != '\0')
    {
        cont++;
    }

    return cont;
}

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    char string[200], l1, l2;
    int i;

    printf("Informe a string: ");
    gets(string);
    printf("Informe a letra que deseja trocar: ");
    scanf("%c", &l1);
    printf("Informe a letra que desaja trocar pela letra | %c |: ", l1);
    scanf(" %c", &l2);

    for (i = 0; i < contadorLetras(string); i++)
    {
        if (string[i] == l1)
        {
            string[i] = l2;
        }
    }
    printf("\n\n- %s \n\n", string);

    return 0;
}