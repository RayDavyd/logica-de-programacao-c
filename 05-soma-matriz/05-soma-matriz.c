/*Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e calcule
a soma de todos os seus números. O cálculo dessa soma deve ser feito por meio de um
subprograma.*/

#include <stdio.h>
const int ORDEM = 3;

void lerMatriz(float mat[ORDEM][ORDEM])
{
    for (int i = 0; i < ORDEM; i++)
    {
        for (int j = 0; j < ORDEM; j++)
        {
            printf("Informe um numero: ");
            scanf("%f", &mat[i][j]);
        }
    }
}

float somaMatriz(float mat[ORDEM][ORDEM])
{
    float soma = 0;
    for (int i = 0; i < ORDEM; i++)
    {
        for (int j = 0; j < ORDEM; j++)
        {
            soma = soma + mat[i][j];
        }
    }
    return soma;
}

int main()
{
    float mat[ORDEM][ORDEM];
    lerMatriz(mat);
    printf("A soma de todos os numeros da matriz é: %.2f", somaMatriz(mat));
    return 0;
}