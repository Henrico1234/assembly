#include <stdio.h>
#include <string.h>
#include "logi.h"

    //Operaões que alteram o fluxo do programa
    // o decremento de -1, para quando voltar e somar um em  i(linhhas), vá para posição desejada

void pular1( int registrador[], char instrucao[],int indice_reg1, int indice_reg2, int endereco,  int *i){
        if(registrador[indice_reg1] == registrador[indice_reg2]){ // se o valor dos registrados forem iguais altera o fluxo do programa
            *i = endereco -1;

}
}

void pular2( int registrador[], char instrucao[],int indice_reg1, int indice_reg2, int endereco,  int *i){
        if(registrador[indice_reg1] < registrador[indice_reg2]){// se o valor do registrador 1 for menor do que o do registrador 2 altera o fluxo do programa
            *i = endereco -1;

}
}

void pular3( int *i, int endereco){// pula para a linha indica

        *i = endereco -1;

}





