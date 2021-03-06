/* Fa�a um programa que defina uma fun��o chamada tiraDois que receber�
   por refer�ncia uma vari�vel inteira, e subtrair� dois do valor dela,
   caso o novo valor n�o fique menor que zero. Se a fun��o tiraDois
   conseguir subtrair ela deve retornar o valor 1 indicando sucesso,
   caso n�o seja poss�vel, a fun��o dever� retornar 0 indicando fracasso.
   Na fun��o principal (main) crie uma vari�vel local inteira, leia com o
   usu�rio um valor para ela, e chame a fun��o tiraDois passando-a.
   Depois caso ela tenha retirado dois imprima na tela o novo valor da
   vari�vel, caso n�o imprima uma mensagem de erro. */

#include<stdio.h>

int tiraDois(int* pontInt){

    if (*pontInt - 2 < 0){
        return 0; // Falso
    }else{

        *pontInt = *pontInt - 2;

        return 1; // Verdadeiro
    }
}

int main(){
    int varLocal, teste;

    printf("\n Entre com um valor inteiro: ");
    scanf("%d", &varLocal);

    teste = tiraDois(&varLocal);

    if (teste){
        printf("\n O novo valor da variavel local eh: %d\n", varLocal);
    }else{
        printf("\n\a Nao foi possivel subtrair o valor pois ficaria negativo!\n");
    }

    return 0;
}
