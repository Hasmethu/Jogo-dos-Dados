#include <stdlib.h>
#include "jogo.h"

// Função "numAleatorio" que serve para gerar numeros aleatórios e armazenar os mesmos dentro do vetor "Secreto" a função main.
void numAleatorio(int min, int max, int f_count, int f_secreto[]){
    int i = 0;
    
    for(i = 0; i < f_count; i++){
        int rd_num = rand() % (max - min + 1) + min;
        f_secreto[i] = rd_num;
    }
}