#include <stdio.h>
#include <stdlib.h>
#include "jogo.h"

// Função "numAleatorio" que serve para gerar numeros aleatórios e armazenar os mesmos dentro do vetor "Secreto" a função main.
void numAleatorio(int min, int max, int f_count, int f_secreto[])
{
    int i = 0;

    for (i = 0; i < f_count; i++)
    {
        int rd_num = rand() % (max - min + 1) + min;
        f_secreto[i] = rd_num;
    }
}

void UsuTentativas(int f_tentativa[], int f_count)
{
    int t = 0;
    int d = 0;
    int val = 1;
    int resultado;

    for (t = 0; t < f_count; t++)
    {
        do
        {
            printf("Digite o %d valor: ", val);
            resultado = scanf("%d", &f_tentativa[t]);
            if (resultado != 1 || f_tentativa[t] < 1 || f_tentativa[t] > 4)
            {
                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF)
                {
                }

                printf("Insira um número válido\n");
            }
        } while (resultado != 1 || f_tentativa[t] < 1 || f_tentativa[t] > 4);
        val++;
    }
}

int funComp(int f_secreto[], int f_tentativa[], int f_count, int f_pos[], int *f_mai, int *f_men)
{
    int a = 0;
    int ac = 0;
    int p = 0;
    *f_mai = 0;
    *f_men = 0;

    for (a = 0; a < f_count; a++)
    {
        if (f_tentativa[a] == f_secreto[a])
        {
            ac++;
            f_pos[p] = a;
            p++;
        }
        else if (f_tentativa[a] > f_secreto[a])
        {
            (*f_mai)++;
        }
        else if (f_tentativa[a] < f_secreto[a])
        {
            (*f_men)++;
        }
    }

    return ac;
}