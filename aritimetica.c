#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "aritimetica.h"


void aritimetica(char acoes[][100],  char instrucao[], int indice_reg1, int indice_reg2 ,int indice_reg3, int registrador[]){
if(strcmp(instrucao,"ADD") == 0){
registrador[indice_reg1] = registrador[indice_reg2] + registrador[indice_reg3];
}
if(strcmp(instrucao,"SUB") == 0){
registrador[indice_reg1] = registrador[indice_reg2] - registrador[indice_reg3];
}
if(strcmp(instrucao,"MUL") == 0){
registrador[indice_reg1] = registrador[indice_reg2] * registrador[indice_reg3];
}
if(strcmp(instrucao,"DIV") == 0){
registrador[indice_reg1] = registrador[indice_reg2] / registrador[indice_reg3];
}
if(strcmp(instrucao,"MOD") == 0){
registrador[indice_reg1] = registrador[indice_reg2] % registrador[indice_reg3];
 }
}
