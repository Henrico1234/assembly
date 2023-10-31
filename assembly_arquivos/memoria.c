#include <stdio.h>
#include <string.h>
#include "memoria.h"

//operações que envolvem alocação de registradores para memorias e vice-versa

void memoria1(char instrucao[], int registrador[], int indice_reg, int indice_memoria, int memory[]){
 

    if(strcmp(instrucao,"STORE") == 0 ){
        indice_memoria = registrador[indice_memoria];
        memory[indice_memoria] =  registrador[indice_reg];

    }
}
void memoria2(char instrucao[], int registrador[], int indice_reg, int indice_memoria, int memory[]){

    if (strcmp(instrucao,"LOAD") == 0 ){
        indice_memoria = registrador[indice_memoria];
        registrador[indice_reg] = memory[indice_memoria];
    }
}


