#include <stdio.h>
#include <string.h>
#include "aritimetica.h"

//Operaões que armazenam em um registrador o resultado de operçoes aritimeitcas entre dois registradores


void soma(int indice_reg1, int indice_reg2, int indice_reg3, int registrador[]){

 registrador[indice_reg1] = registrador[indice_reg2] + registrador[indice_reg3];//soma os registradores

}
void sub(int indice_reg1, int indice_reg2, int indice_reg3, int registrador[]){

 registrador[indice_reg1] = registrador[indice_reg2] - registrador[indice_reg3];//subtrai os registradores

}
void mult(int indice_reg1, int indice_reg2, int indice_reg3, int registrador[]){

 registrador[indice_reg1] = registrador[indice_reg2] * registrador[indice_reg3];//multiplica os registradores

}
void div(int indice_reg1, int indice_reg2, int indice_reg3, int registrador[]){


 registrador[indice_reg1] = registrador[indice_reg2] / registrador[indice_reg3];//dividi os registradores

}
void resto(int indice_reg1, int indice_reg2, int indice_reg3, int registrador[]){

 registrador[indice_reg1] = registrador[indice_reg2] % registrador[indice_reg3];//pega os resto da divisão dos registradores e so for negativo soma e terceiro registrador
    if(registrador[indice_reg1] < 0){                                           
            registrador[indice_reg1] = registrador[indice_reg1] + registrador[indice_reg3];
}
}






















void aritimetica(char acoes[][100],  char instrucao[], int indice_reg1, int indice_reg2 ,int indice_reg3, int registrador[]){
    if(strcmp(instrucao,"ADD") == 0){
        registrador[indice_reg1] = registrador[indice_reg2] + registrador[indice_reg3];
    }
    else if(strcmp(instrucao,"SUB") == 0){
        registrador[indice_reg1] = registrador[indice_reg2] - registrador[indice_reg3];
    }
    else if(strcmp(instrucao,"MUL") == 0){
        registrador[indice_reg1] = registrador[indice_reg2] * registrador[indice_reg3];
    }
    else if(strcmp(instrucao,"DIV") == 0){
        registrador[indice_reg1] = registrador[indice_reg2] / registrador[indice_reg3];
    }
    else if(strcmp(instrucao,"MOD") == 0){
        registrador[indice_reg1] = registrador[indice_reg2] % registrador[indice_reg3];
        if(registrador[indice_reg1] < 0){
            registrador[indice_reg1] = registrador[indice_reg1] + registrador[indice_reg3];
        }
    }
}
