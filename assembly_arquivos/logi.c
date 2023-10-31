#include <stdio.h>
#include <string.h>
#include "logi.h"

    //Operaões que alteram o fluxo do programa

void pular1( int registrador[], char instrucao[],int indice_reg1, int indice_reg2, int endereco,  int *i){
        if(registrador[indice_reg1] == registrador[indice_reg2]){
            *i = endereco -1;

}
}

void pular2( int registrador[], char instrucao[],int indice_reg1, int indice_reg2, int endereco,  int *i){
        if(registrador[indice_reg1] < registrador[indice_reg2]){
            *i = endereco -1;

}
}

void pular3( int *i, int endereco){

        *i = endereco -1;

}





