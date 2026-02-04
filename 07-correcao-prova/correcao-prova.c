/*Escreva um programa em C que leia o gabarito de uma prova objetiva de dez questões e, em seguida, leia o cartão de respostas de dez candidatos. Para cada candidato o programa deve informar a quantidade de acertos. O programa deve ter um subprograma que receba como parâmetro um vetor de dez caracteres e faça a leitura e preenchimento desse vetor. Esse subprograma deve ser usado tanto para a leitura do gabarito quanto do cartão de resposta de cada candidato. O programa também deve ter um subprograma que receba como parâmetros dois vetores de dez caracteres e verifique quantas posições eles têm em comum. Esse subprograma deve ser usado para computar a quantidade de acertos de cada um dos candidatos.*/
#include<stdio.h>
const int QUANTIDADE = 10;

void lerVetor(char vet[QUANTIDADE]){
    for(int i = 0; i < QUANTIDADE; i++){
        printf("Informe um numero: ");
        scanf(" %c", &vet[i]);
    }
}

int verificarGabarito(char vetcr[QUANTIDADE], char vetgb[QUANTIDADE]){
    int  contador = 0;
    for(int i = 0; i < QUANTIDADE; i++){
        if(vetcr[i] == vetgb[i]){
            contador++;
        }
    }
    return contador;
}

int main(){
    char vetcr[QUANTIDADE], vetgb[QUANTIDADE];
    printf("Informe o cartao resposta da prova: \n");
    lerVetor(vetcr);
    for(int i = 1; i <= QUANTIDADE; i++){
        printf("Informe o gabarito do candidato %d\n", i);
        lerVetor(vetgb);    
        printf("O candidato %d acertou %d questoes\n", i, verificarGabarito(vetcr, vetgb));
    }
    return 0;
}