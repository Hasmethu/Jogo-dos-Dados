#include <stdio.h>
#include "menu.h"

int escolherDificuldade()
{
    int e;

    printf("Bem vindo ao jogo dos dados, selecione a dificuldade desejada\n");
    printf("1 - Normal: 3 numeros\n");
    printf("2 - Medio: 6 numeros\n");
    printf("3 - Dificil: 12 numeros\n");
    printf("Escolha: ");

    scanf("%d", &e);

    return e;
}

int menuFinal()
{
    int opcao;

    printf("\n===== Selecione sua escolha abaixo =====\n");
    printf("1 - Jogar novamente\n");
    printf("0 - Sair\n");
    printf("Escolha: \n");

    scanf("%d", &opcao);

    return opcao;
}