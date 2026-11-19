// Bibliotecas até então: Padrão do C, Biblioteca para funções envolvendo memória, e biblioteca de manipulação de tempo.
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "menu.h"
#include "jogo.h"

int main()
{
    srand(time(NULL)); // inicializa o gerador aleatório, o que garante que o número será diferente a cada inicialização do programa.
    int count;         // Seleciona a quantidade de números aleatórios da partida.
    int secreto[12];   // Vetor com 12 espaços máximos, sendo utilizados a depender da escolha de dificuldade do usuário.
    int tentativa[12];
    int menu = 0;         // Controla a interface do menu.
    int dificuldade;      // Variável que armazena a escolha de dificuldade selecionada pelo usuário.
    int min = 1, max = 4; // Faz com que os números gerados estejam sempre dentro do raio de 1 até 4, assim como em um dado de 4 lados.
    int p = 0;            // Variável criada apenas para controle do printf ao final do código que mostra os valores armazendos dentro de secreto.
    int jogar = 1;
    int ac;
    int pos[12];
    int alto = 0;
    int baixo = 0;
    int limite = 0;

    while (jogar)
    {
        int tent = 0;
        dificuldade = escolherDificuldade();

        // Abaixo existe um switch que verifica a dificuldade armazenada dentro da variável "e", de acordo com a escolha do usuário.
        switch (dificuldade)
        {
        case 1:
            count = 3;
            limite = 4;
            break;

        case 2:
            count = 6;
            limite = 6;
            break;

        case 3:
            count = 12;
            limite = 8;
            break;

        default:
            printf("Desculpe, esta dificuldade não é válida. Tente de novo com uma dificuldade válida!\n");
            return 0;
        }
        numAleatorio(min, max, count, secreto); // Declaração que envia para a função "numAleatorio" os valores com os quais ela deve trabalhar.

        system("cls");
        printf("\n|||---------------------------------------------------------------------------------------------------|||");
        // Loop temporário criado para testes, mostrando todos os valores presentes dentro do vetor "Secreto"
        printf("\nNumeros armazenados na variavel 'secreto': \n");
        for (p = 0; p < count; p++)
        {
            printf("%d ", secreto[p]);
        }
        printf("\n|||---------------------------------------------------------------------------------------------------|||\n");
        do
        {

            UsuTentativas(tentativa, count); // Declaração da função que permite o usuário digitar suas tentativas.
            ac = funComp(secreto, tentativa, count, pos, &alto, &baixo);

            char mensagem[100]; // Variável que armazena a frase.
            char auxiliar[50];  // Variável que auxiliar para armazenar frase.
            int primeiro = 1;   // Variável que controla as vírgulas.

            strcpy(mensagem, ""); // mensagem vazia com strcpy

            if (alto > 0)
            {
                if (alto == 1)
                {
                    sprintf(auxiliar, "%d numero esta alto", alto);
                    strcat(mensagem, auxiliar);
                    primeiro = 0;
                }
                else
                {
                    sprintf(auxiliar, "%d numeros estao altos", alto);
                    strcat(mensagem, auxiliar);
                    primeiro = 0;
                }
            }

            if (baixo > 0)
            {
                if (baixo == 1)
                {
                    if (primeiro == 0)
                    {
                        strcat(mensagem, ", ");
                    }

                    sprintf(auxiliar, "%d numero esta baixo", baixo);
                    strcat(mensagem, auxiliar);
                    primeiro = 0;
                }
                else
                {
                    if (primeiro == 0)
                    {
                        strcat(mensagem, ", ");
                    }

                    sprintf(auxiliar, "%d numeros estao baixos", baixo);
                    strcat(mensagem, auxiliar);
                    primeiro = 0;
                }
            }

            if (ac > 0)
            {
                if (ac == 1)
                {
                    if (primeiro == 0)
                    {
                        strcat(mensagem, ", ");
                    }

                    sprintf(auxiliar, "%d numero esta certo", ac);
                    strcat(mensagem, auxiliar);
                    primeiro = 0;
                }
                else
                {
                    if (primeiro == 0)
                    {
                        strcat(mensagem, ", ");
                    }

                    sprintf(auxiliar, "%d numeros estao certos", ac);
                    strcat(mensagem, auxiliar);
                    primeiro = 0;
                }
            }

            printf("%s\n", mensagem);

            tent++;
            int restantes = limite - tent;
            printf("%d tentativas restantes.\n", restantes);
        } while (tent < limite && ac < count);
        if (ac == count)
        {
            printf("Meus parabens, voce ganhou!!!");
            printf("Pressione enter para voltar ao comeco");
            getchar();
            getchar();
        }
        else
        {
            printf("Infelizmente nao foi dessa vez!!! Tente novamente!\n");
            printf("Pressione enter para voltar ao comeco: ");
            getchar();
            getchar();
        }
        system("cls");
        menu = menuFinal();
        if (menu == 1)
        {
            continue;
        }
        else if (menu == 0)
        {
            jogar = 0;
        }
    }

    return 0;
}