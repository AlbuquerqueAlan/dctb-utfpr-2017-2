/* Retorno de dados em fun��es. Na fun��o main crie tr�s vari�veis
   inteiras chamadas Raiz, A e Num, e um ponteiro do tipo inteiro
   chamado Exp inicializado com NULL. Fa�a Exp receber o endere�o
   de A. Pergunte ao usu�rio um n�mero e armazene em Num, depois
   chame uma fun��o chamada Contas passando a vari�vel Raiz por
   referencia, o ponteiro Exp e a vari�vel Num por Valor. Esta fun��o
   deve calcular a Raiz do valor armazenado em Num e armazenar em Raiz,
   calcular o valor de Num elevado a 2 e armazenar no endere�o apontado
   por Exp. Depois na fun��o principal imprima o valor da vari�vel Raiz
   e o valor apontado por Exp. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void contas(int* resultadoRaiz, int* resultadoExponenciacao, int numero) {

    *resultadoRaiz = sqrt(numero);
    *resultadoExponenciacao = pow(numero, 2);
}

int main() {

    int Raiz = 0, A = 0, Num = 0, *Exp =  NULL;

    Exp = &A;

    printf("\n Entre com o numero para os calculos: ");
    scanf("%d",&Num);

    contas(&Raiz, Exp, Num);

    printf("\n Valor da raiz         : %d",  Raiz);
    printf("\n Valor da exponenciacao: %d\n",*Exp);

    return 0;
}
