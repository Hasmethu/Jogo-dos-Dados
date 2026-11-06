#include <stdio.h>
#include <stdlib.h>

int numAleatorio(int min, int max, int f_count){
    int i = 0;
    
    for(i = 0; i < f_count; i++){
        int rd_num = rand() % (max - min + 1) + min;

        printf("%d ", rd_num);
    }
}

int main()
{
    int count = 10;   
    int min = 1, max = 4;
    int menu = 0;
    
    while(menu != 1){
    numAleatorio(min, max, count);
    printf("Digite o que deseja: ");
    scanf("%i", &menu);
    }
    return 0;
}