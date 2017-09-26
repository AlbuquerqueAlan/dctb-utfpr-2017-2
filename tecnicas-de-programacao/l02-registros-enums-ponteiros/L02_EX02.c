
/* Crie uma estrutura (struct) chamada Contato, com os campos:
   nome do tipo vetor de char de 40 posi��es e telefone do tipo
   vetor de char de 12 posi��es. Crie duas vari�veis chamadas
   contato1 e contato2 do tipo Contato. Fa�a a leitura dos dados
   da vari�vel contato1 e depois copie o conte�do de contato1
   para contato2, logo ap�s isto imprima na tela as informa��es
   de contato2.

   Nesta vers�o � copiada todo o valor de uma struct para outra
   de uma vez */

#include<stdio.h>

#define MAX_NOME     40
#define MAX_TELEFONE 12

struct Contato{
   char nome[MAX_NOME];
   char telefone[MAX_TELEFONE];
};

typedef struct Contato Contato;

Contato contato1, contato2;

int main(){

	 printf("\n Entre com o nome....: ");
	 gets(contato1.nome);

	 fflush(stdin);
	 printf(" Entre com o telefone: ");
	 gets(contato1.telefone);

	 contato2 = contato1; /*  S� funciona se o vetor for declarado est�tico,
	                          ou seja com o tamanho j� definido dentro da
	                          struct parametrizado */

	 printf("\n Dados do Contato 2");
	 printf("\n ==================\n");

	 printf("\n Nome....: %s\n Telefone: %s\n", contato2.nome, contato2.telefone);

	 return 0;
}
