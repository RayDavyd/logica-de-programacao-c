#include <stdio.h>

const int NUM_QUESTOES = 10;
const int NUM_CANDIDATOS = 10;

// Subprograma 1: Leitura (Serve para Gabarito e Aluno)
// Recebe o vetor onde os dados serão salvos
void lerRespostas(char vetor[NUM_QUESTOES]) {
    for (int i = 0; i < NUM_QUESTOES; i++) {
        printf("   Questao %d: ", i + 1);
        // O espaço antes do %c é vital para limpar o buffer do teclado
        scanf(" %c", &vetor[i]);
    }
}

// Subprograma 2: Comparação
// Retorna o número de acertos
int calcularAcertos(char respostas_aluno[NUM_QUESTOES], char gabarito_oficial[NUM_QUESTOES]) {
    int acertos = 0;
    for (int i = 0; i < NUM_QUESTOES; i++) {
        // Se a resposta do aluno for igual ao gabarito, soma ponto
        if (respostas_aluno[i] == gabarito_oficial[i]) {
            acertos++;
        }
    }
    return acertos;
}

int main() {
    // Declaração dos vetores usando a constante
    char gabarito[NUM_QUESTOES];
    char cartao_aluno[NUM_QUESTOES];

    // --- 1. Leitura do Gabarito Mestre ---
    printf("\n===================================\n");
    printf("   CADASTRO DO GABARITO OFICIAL    \n");
    printf("===================================\n");
    lerRespostas(gabarito);

    // --- 2. Loop para ler e corrigir os 10 candidatos ---
    printf("\n===================================\n");
    printf("      CORRECAO DOS CANDIDATOS      \n");
    printf("===================================\n");

    for (int i = 1; i <= NUM_CANDIDATOS; i++) {
        printf("\n--> Candidato %d:\n", i);
        
        // Lê as respostas deste aluno específico (sobrescreve o anterior)
        lerRespostas(cartao_aluno);
        
        // Calcula a nota comparando o cartão atual com o gabarito fixo
        int nota = calcularAcertos(cartao_aluno, gabarito);
        
        printf("\n[RESULTADO] O candidato %d acertou %d questoes.\n", i, nota);
        printf("-----------------------------------\n");
    }

    return 0;
}