#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "decodifica.h"
#include "aritimetica.h"


void decodifica(char acoes[][100], int N){
    int i;
    char instrucao[15], var1[15], var2[15], var3[15];
    int registrador[32];

    for (i = 0 ; i < N; i++)
    {
        sscanf(acoes[i], "%s", &instrucao);

        if(strcmp(instrucao,"MOV") == 0){
                sscanf(acoes[i],"%s %s %s %s", instrucao, var1, var2);
                if(var1[0] == 'R'){
                int indice_reg1 = sscanf(var1,"R%d", &indice_reg1);
                if(var2[0] != 'R'){
                int var2_int = 0;
                var2_int = atoi(var2);
                registrador[indice_reg1] = var2_int; 
                }
                int indice_reg2 = sscanf(var1,"R%d", &indice_reg2);
                registrador[indice_reg1] = registrador[indice_reg2];  
                }

        }

        if(strcmp(instrucao,"ADD") == 0 ||strcmp(instrucao,"SUB") == 0 || strcmp(instrucao,"MUL") == 0 || strcmp(instrucao,"DIV") == 0 ||strcmp(instrucao,"MOD") == 0 || (strcmp(instrucao,"MOV") == 0)){
            sscanf(acoes[i], "%s %s %s %s", instrucao, var1, var2, var3);
             int indice_reg1 = sscanf(var1,"R%d", &indice_reg1);
             int indice_reg2 = sscanf(var2,"R%d", &indice_reg2);
             int indice_reg3 = sscanf(var3,"R%d", &indice_reg3);
            aritimetica(acoes, instrucao, indice_reg1, indice_reg2, indice_reg3, registrador);  
        }

    }   

    }













