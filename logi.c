#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "logi.h"

int logi(char acoes[][100], int registrador[], char instrucao[],  int indice_reg1, int indice_reg2, int endereco){
    if(strcmp(instrucao,"JMP") == 0){
        return endereco;
        printf("%d", endereco);
    }
    if(strcmp(instrucao,"BEQ") == 0){
        if(registrador[indice_reg1] == registrador[indice_reg2]){
            return endereco;
    }
        
    }
    if(strcmp(instrucao,"BLT") == 0){
        if(registrador[indice_reg1] < registrador[indice_reg2]){
            return endereco;
        }
    }

}