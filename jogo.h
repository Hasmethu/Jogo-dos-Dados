#ifndef JOGO_H
#define JOGO_H

void numAleatorio(int min, int max, int f_count, int f_secreto[]);
void UsuTentativas(int f_tentativa[], int f_count);
int funComp(int f_secreto[], int f_tentativa[], int f_count, int f_pos[], int *f_mai, int *f_men);
#endif