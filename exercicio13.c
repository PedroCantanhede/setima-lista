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
    char entrada[50], saida[50], arquivo[200], transf[200];
    int finalizador = 1, contador = 0;

    while (finalizador)
    {
        printf("Informe o nome do arquivo.txt: ");
        gets(entrada);
        printf("Informe o nome do arquivo.txt a ser transferido: ");
        gets(saida);

        arq = fopen(entrada, "r");

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
            while (fgets(arquivo, 200, arq))
                for (int i = strlen(arquivo) - 1; i >= 0; i--, contador++)
                    transf[contador] = arquivo[i];

            fclose(arq);

            arq = fopen(saida, "a");
            if (arq == NULL)
            {
                printf("\n\n-=-=-=- Erro na transferencia do arquivo -=-=-=- \n");
                printf("\nTente novamente! [1] Sim [0] Nao: ");
                scanf("%d", &finalizador);
                fclose(arq);
                getchar();
                printf("\n");
            }
            else
            {
                fputs(transf, arq);
                printf("\n\n-=-=-=- Transferencia Concluida! -=-=-=- \n");
                fclose(arq);
                finalizador = 0;
            }
        }
    }

    return 0;
}