//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    // Regionalização (Desbuga palavrass com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Ponteiro - aponta a localização do registro existente
    FILE *arq;

    // Declaração das Variáveis
    char palavras[50], arquivo[50], palavra[200];
    int i, j, finalizador = 1, qnt = 0, tamanho, retorno;

    while (finalizador)
    {
        printf("Informe o nome do arquivo.txt: ");
        gets(arquivo);
        printf("Informe a palavra: ");
        scanf("%s", &palavras);

        arq = fopen(arquivo, "r");

        if (arq == NULL)
        {
            printf("\n\n-=-=-=- Erro na abertura do arquivo -=-=-=- \n");
            printf("\nTente novamente! [1] Sim [0] Nao: ");
            scanf("%d", &finalizador);

            fclose(arq);

            getchar();
            printf("\n");
        }
        else
        {
            while (fgets(palavra, 200, arq))
            {
                tamanho = strlen(palavra);
                retorno = 0;
                if (tamanho > strlen(palavras))
                    for (i = 0, j = 0; i < tamanho; i++)
                    {
                        if (palavra[i] == palavras[j])
                        {
                            j++;
                            if (j == strlen(palavras))
                            {
                                retorno = 1;
                                break;
                            }
                        }
                        else
                            j = 0;
                    }

                retorno ? qnt++ : 0;
            }

            finalizador = 0;
        }
    }

    if (qnt == 0)
    {
        printf("\n\n-=-=-=-=-=- Arquivo -=-=-=-=-=- \n");
        printf("- A palavra nao foi encontrada.\n\n");
    }
    else
    {
        printf("\n\n-=-=-=-=-=- Arquivo -=-=-=-=-=- \n");
        printf("- A palavra foi encontrada %d vezes.\n\n", qnt);
    }

    fclose(arq);

    return 0;
}