#include <stdio.h>
#include <string.h>
#include "memoria.h"


void memoria(char instrucao[], int registrador[], int indice_reg, int indice_memoria, int memory[]){
 

    if(strcmp(instrucao,"STORE") == 0 ){
        //printf("%d", registrador[indice_reg]);
        indice_memoria = registrador[indice_memoria];
        memory[indice_memoria] =  registrador[indice_reg];
       // printf("%d", memory[100]);

    }

    if (strcmp(instrucao,"LOAD") == 0 ){
        indice_memoria = registrador[indice_memoria];
        registrador[indice_reg] = memory[indice_memoria];
        //printf("%d", registrador[1]);
    }
}


