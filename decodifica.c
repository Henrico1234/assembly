#include <stdio.h>
#include <string.h>
#include "decodifica.h"
#include "aritimetica.h"


void decodifica(char aux[][100], int N){
    int i;
    char instrucao[15], op1[15], op2[15], op3[15];

    for (i = 0 ; i < N; i++)
    {
        sscanf(aux[i], "%s", instrucao);
        if(strcmp(instrucao,"ADD") == 0 ||strcmp(instrucao,"SUB") == 0 || strcmp(instrucao,"MUL") == 0 || strcmp(instrucao,"DIV") == 0 ||strcmp(instrucao,"MOD") == 0){
            sscanf(aux[i], "%s %s %s %s", instrucao, op1, op2, op3);
            aritimetica(aux, instrucao, op1, op2, op3);  
        }
    }
}











