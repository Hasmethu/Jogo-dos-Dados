// Bibliotecas até então: Padrão do C, Biblioteca para funções envolvendo memória, e biblioteca de manipulação de tempo.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "menu.h"
#include "jogo.h"

int main()
{
    srand(time(NULL));    // inicializa o gerador aleatório, o que garante que o número será diferente a cada inicialização do programa.
    int count;            // Seleciona a quantidade de números aleatórios da partida.
    int min = 1, max = 4; // Faz com que os números gerados estejam sempre dentro do raio de 1 até 4, assim como em um dado de 4 lados.
    int secreto[12];      // Vetor com 12 espaços máximos, sendo utilizados a depender da escolha de dificuldade do usuário.
    int menu = 0;         // Controla a interface do menu.
    int p = 0;            // Variável criada apenas para controle do printf ao final do código que mostra os valores armazendos dentro de secreto.
    int dificuldade;      // Variável que armazena a escolha de dificuldade selecionada pelo usuário.
    int jogar = 1;

    while (jogar)
    {
        dificuldade = escolherDificuldade();

        // Abaixo existe um switch que verifica a dificuldade armazenada dentro da variável "e", de acordo com a escolha do usuário.
        switch (dificuldade)
        {
        case 1:
            count = 3;
            break;

        case 2:
            count = 6;
            break;

        case 3:
            count = 12;
            break;

        default:
            printf("Desculpe, esta dificuldade não é válida. Tente de novo com uma dificuldade válida!\n");
            return 0;
        }

        numAleatorio(min, max, count, secreto); // Declaração que envia para a função "numAleatorio" os valores com os quais ela deve trabalhar.

        // Abaixo está o menu que será apresentado para o usuário.
        printf("Numeros armazenados na variavel 'secreto': \n");

        // Loop criado para mostrar todos os valores presentes dentro do vetor "Secreto"
        for (p = 0; p < count; p++)
        {
            printf("%d ", secreto[p]);
        }
        menu = menuFinal();
        if (menu == 1)
        {
            continue;
        }
        else if (menu == 2)
        {
            continue;
        }
        else
        {
            jogar = 0;
        }

    }
    return 0;
}