#include<stdio.h>

int main()
{
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int matriz[10][10];

    // Preencher matriz com zeros
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            matriz[i][j] = 0;
        }
    }

    // Adiciona forma CONE em (0,0)
    int cone[3][5] = {
        {0, 0, 3, 0, 0},
        {0, 3, 3, 3, 0},
        {3, 3, 3, 3, 3}
    };
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            matriz[i][j] += cone[i][j];
        }
    }

    // Adiciona forma CRUZ em (4,2)
    int cruz[3][5] = {
        {0, 0, 3, 0, 0},
        {3, 3, 3, 3, 3},
        {0, 0, 3, 0, 0}
    };
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            matriz[4 + i][2 + j] += cruz[i][j];
        }
    }

    // Adiciona forma OCTAEDRO em (6,5)
    int octaedro[3][5] = {
        {0, 0, 3, 0, 0},
        {0, 3, 3, 3, 0},
        {0, 0, 3, 0, 0}
    };
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            matriz[6 + i][5 + j] += octaedro[i][j];
        }
    }

    // Imprime letras do topo
    for(int i = 0; i < 10; i++){
        printf(" %c", linha[i]);
    }
    printf("\n");

    // Imprime a matriz
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
