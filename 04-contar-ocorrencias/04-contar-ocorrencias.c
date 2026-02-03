/*Escreva um programa que leia um vetor de dez números inteiros e um número inteiro N e
verifique quantas vezes o número N aparece dentro do vetor. A verificação deve ser feita
por meio de um subprograma.*/

#include<stdio.h>
const int QUANTIDADE = 10;

void lerVetor(int vet[QUANTIDADE]){
    for(int i = 0; i < QUANTIDADE; i++){
        printf("Informe um numero: ");
        scanf("%d", &vet[i]);
    }
}

int contarOcorrencias(int vet[QUANTIDADE], int N){
    int cont = 0;
    for(int i = 0; i < QUANTIDADE; i++){
        if(vet[i] == N){
            cont++;
        }
    }
    return cont;
}



int main(){
    int N, vet[QUANTIDADE];
    lerVetor(vet);
    printf("Informe o numero que deseja ver quantas vezes aparece no vetor: ");
    scanf("%d", &N);
    printf("O numero %d aparece %d vezes dentro do vetor\n", N, contarOcorrencias(vet, N));

    return 0;
}