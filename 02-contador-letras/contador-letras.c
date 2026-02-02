/*Escreva um programa que leia um texto e identifique a quantidade de letras informadas
nesse texto. A verificação deve ser feita por meio de um subprograma.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contador_Letras(char texto[])
{
    int i = 0;
    int quantidade = 0;
    while (texto[i] != '\0'){
       if(isalpha(texto[i]) != 0){
        quantidade++;
       }
       i++;
    }
    return quantidade;
    
}

int main()
{
    char texto[50];
    printf("Informe o texto: ");
    fgets(texto, 50, stdin);
    printf("O texto informado possui  %d letras\n", contador_Letras(texto));
    return 0;
}