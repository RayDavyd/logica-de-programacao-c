/*Escreva um programa que leia dois números inteiros M e N e imprima todos os números
primos que existem no intervalo [M,N]. A impressão deve ser feita por meio de um
subprograma.*/
#include <stdio.h>

int primos(int num)
{
    int cont = 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cont++;
        }
    }

    if (cont == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void imprimirPrimos(int M, int N)
{
    for (int i = M; i <= N; i++)
    {
        if (primos(i))
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int M, N;
    printf("Informe M e N: ");
    scanf("%d%d", &M, &N);
    imprimirPrimos(M, N);
    return 0;
}