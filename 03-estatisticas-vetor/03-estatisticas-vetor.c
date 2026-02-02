/*Escreva um programa que leia um vetor de 10 números inteiros e identifique a soma de
todos os seus números, a média aritmética, o maior valor, o menor valor, a posição do maior
valor e a posição do menor valor. Cada uma dessas informações deve ser calculada por meio
de um subprograma.*/

#include <stdio.h>
const int QUANTIDADE = 10;

int somaVetor(int vet[QUANTIDADE])
{
    int soma = 0;
    for (int i = 0; i < QUANTIDADE; i++)
    {
        soma = soma + vet[i];
    }
    return soma;
}

int mediaAritmetrica(int vet[QUANTIDADE])
{
    int soma = 0;
    for (int i = 0; i < QUANTIDADE; i++)
    {
        soma = soma + vet[i];
    }
    return soma / QUANTIDADE;
}

int maiorValor(int vet[QUANTIDADE])
{
    int maior = vet[0];

    for (int i = 1; i < QUANTIDADE; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
        }
    }
    return maior;
}

int menorValor(int vet[QUANTIDADE])
{
    int menor = vet[0];
    for (int i = 1; i < QUANTIDADE; i++)
    {
        if (vet[i] < menor)
        {
            menor = vet[i];
        }
    }
    return menor;
}

int posMaior(int vet[QUANTIDADE])
{
    int pos = 0;
    int maior = vet[0];

    for (int i = 1; i < QUANTIDADE; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
            pos = i;
        }
    }
    return pos;
}

int posMenor(int vet[QUANTIDADE])
{
    int i = 0;
    int menor = vet[i];
    while (i < QUANTIDADE)
    {
        if (vet[i] < menor)
        {
            menor = vet[i];
        }
        i++;
    }
    return i;
}

int main()
{
    int vet[QUANTIDADE];
    for (int i = 0; i < QUANTIDADE; i++)
    {
        printf("Informe um valor: ");
        scanf("%d", &vet[i]);
    }
    printf("A soma de todos os numeros do vetor é: %d\n", somaVetor(vet));
    printf("A media dos vetores é: %d\n", mediaAritmetrica(vet));
    printf("O maior valor do vetor é: %d\n", maiorValor(vet));
    printf("O menorvalor do vetor é: %d\n", menorValor(vet));
    printf("A posicao do maior valor é: %d\n", posMaior(vet));
    printf("A posicao do menor valor é: %d\n", posMenor(vet));

    return 0;
}
