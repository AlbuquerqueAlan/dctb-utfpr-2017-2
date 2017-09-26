/* Passagem de dados por refer�ncia. Crie um programa que leia dois
   valores inteiros na fun��o principal, depois chame uma fun��o
   chamada Troca passando as duas vari�veis inteiras lidas como
   par�metros por referencia. Esta fun��o ira inverter o valor das
   duas vari�veis. Depois na fun��o principal imprima na tela os
   novos valores das duas vari�veis. */

#include <stdio.h>

void troca(int* P1, int* P2) {

    int Temp;

    Temp = *P1;
    *P1  = *P2;
    *P2  = Temp;
}

int main() {

    int A = 0, B = 0;

    printf("\n Entre com o primeiro numero: ");
    scanf("%d",&A);

    printf(" Entre com o segundo  numero: ");
    scanf("%d",&B);

    troca(&A, &B);

    printf("\n Valor final da variavel 1: %d",   A);
    printf("\n Valor final da variavel 2: %d\n", B);

    return 0;
}
