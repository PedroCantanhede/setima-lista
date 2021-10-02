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
    char s1[100], s2[100];
    int i, j, opcoes, finalizador, tamanho;

    do
    {
        printf("Informe a string S1: ");
        gets(s1);
        printf("\n");
    } while (strlen(s1) > 20);

    tamanho = strlen(s1);

    do
    {
        printf("\n-=-=-=-=-=-=-=- Escolha umas das opcoes -=-=-=-=-=-=-=- \n");
        printf("\n[1] Imprimir tamanho da string");
        printf("\n[2] Comparar a string S1 com uma nova string S2");
        printf("\n[3] Concatenar a string S1 com uma nova string S2");
        printf("\n[4] Imprimir a string S1 de forma ao contrario");
        printf("\n[5] Contar quantidades de vezes que um caractere aparece na string S1");
        printf("\n[6] Substituir a primeira ocorrencia de um caractere C1 por um caractere C2");
        printf("\n[7] Verificar se uma string s2 e substring de s1");
        printf("\n[8] Retornar uma substring da string s1\n");
        scanf("%d", &opcoes);

        switch (opcoes)
        {
        case 1:
            printf("\nA string S1 possui %d caracteres\n", strlen(s1));
            break;
        case 2:
        {
            int comparacao;
            printf("\nInforme a string S2: ");
            getchar();
            gets(s2);
            comparacao = strcmp(s1, s2);

            if (comparacao == 0)
                printf("\nAs strings sao iguais\n");
            else if (comparacao > 0)
                printf("\nA string S1 e maior que a string S2\n");
            else
                printf("\nA string S2 e maior que a string S1\n");

            break;
        }
        case 3:
        {
            printf("\nInforme a string S2: ");
            getchar();
            gets(s2);
            strcat(s1, s2);
            printf("\nNova string concatenada: %s\n", s1);
            break;
        }
        case 4:
            printf("\nString S1 Invertida: ");
            for (int i = tamanho; i >= 0; i--)
                printf("%c", s1[i]);
            printf("\n");
            break;
        case 5:
        {
            int qnt = 0;
            char caractere;
            printf("\nInforme o caractere a ser procurado pela String: ");
            scanf(" %c", &caractere);
            for (i = 0; i < tamanho; i++)
                if (s1[i] == caractere)
                    qnt++;

            printf("\nQuantidade de vezes que o caractere aparece: %d\n", qnt);
            break;
        }
        case 6:
        {
            char c1, c2;
            printf("\nInforme o caractere C1: ");
            scanf(" %c", &c1);
            printf("\nInforme o caractere C2: ");
            scanf(" %c", &c2);
            for (size_t i = 0; i < tamanho; i++)
                if (s1[i] == c1)
                {
                    s1[i] = c2;
                    i = tamanho;
                }

            printf("\nString S1 depois da substituicao: %s\n", s1);
            break;
        }
        case 7:
        {
            int retorno = 0;
            printf("\nInforme a string S2: ");
            getchar();
            gets(s2);
            if (tamanho > strlen(s2))
                for (i = 0, j = 0; i < tamanho; i++)
                {
                    if (s1[i] == s2[j])
                    {
                        j++;
                        if (j == strlen(s2))
                        {
                            retorno = 1;
                            break;
                        }
                    }
                    else
                        j = 0;
                }

            if (retorno)
            {
                printf("\nA string S2 e substring da string S1\n");
            }
            else
            {
                printf("\nA string S2 nao e substring da string S1\n");
            }
            break;
        }
        case 8:
        {
            int inicio, solicitado, max;
            printf("\nInforme a posicao de inicio: ");
            scanf("%d", &inicio);
            printf("\nInforme o tamanho desejado para a substring: ");
            scanf("%d", &solicitado);

            max = tamanho - inicio;

            printf("\nString solicitada pelo usuario: ");

            if (solicitado >= max)
            {
                for (i = inicio, j = 0; j < max; i++, j++)
                {
                    printf("%c", s1[i]);
                }
            }
            else
            {
                for (i = inicio, j = 0; j < solicitado; i++, j++)
                {
                    printf("%c", s1[i]);
                }
            }

            printf("\n");
            break;
        }
        default:
            printf("\n\n-=-=-=- Erro (opcao invalida) -=-=-=- \n");
            break;
        }
    } while (finalizador);
    return 0;
}