#include <stdio.h>
#include <string.h>
#include "logi.h"

    //Operaões que alteram o fluxo do programa

void logi( int registrador[], char instrucao[],  int indice_reg1, int indice_reg2, int endereco, char var1[], int *i){
    if(strcmp(instrucao,"JMP") == 0){
        int enderecoj;
        sscanf(var1, "%d", &enderecoj);
        *i = enderecoj - 1;

        
    }
    if(strcmp(instrucao,"BEQ") == 0){
        if(registrador[indice_reg1] == registrador[indice_reg2]){
            *i = endereco -1;

    }
        
    }
    if(strcmp(instrucao,"BLT") == 0){
        if(registrador[indice_reg1] < registrador[indice_reg2]){
            *i = endereco -1;

        }
    }
}