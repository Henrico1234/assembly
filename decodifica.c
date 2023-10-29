#include <stdio.h>
#include <string.h>
#include "decodifica.h"
#include "aritimetica.h"
#include "logi.h"
#include "memoria.h"
#include "tela.h"

/*
Aqui é o principal file do programa, verifica as instruções e os registradores(indices)
e de um valor a eles caso necessario, tudo gira em torno do sscanf para ler termo a termo
e depois usa-lo de forma coreta, primeorp sempre checando a instrução com strcpm(que compara strigs)

*/

void decodifica(char acoes[][100], int N){
    int i;
    char instrucao[15], var1[15], var2[15], var3[15];
    int registrador[32];
    int memory[1000];

    //foram zerados tanto os registrados quanto os valores da memoria   

    for( i = 0; i < 32; i++){
        registrador[i] = 0;
    }

    for( i = 0; i < 1000; i++){
        memory[i] = 0;
    }
    
    i = 0;

    /*as linhas giram em torno do i, porém as interações em torno do J para evitar problemas
    com as variaves que voltam ou avançam o programa, e para quando chegar o limite de interações 
    parar de as comparaçoes
    */
    for (int j = 0 ; j < 100000; j++)
    {
        sscanf(acoes[i], "%s", instrucao);  

       if(strcmp(instrucao,"EXIT") == 0){
            break;
       }
        //armazenando valores nos registradores, sendo interios ou outro registrador
        if(strcmp(instrucao,"MOV") == 0){
                sscanf(acoes[i],"%s %s %s", instrucao, var1, var2);
                if(var1[0] == 'R'){
                    int indice_reg1  = 0;
                    sscanf(var1,"R%d", &indice_reg1);
                if(var2[0] != 'R'){ 
                    int int_var2;
                    sscanf(var2,"%d", &int_var2);
                    registrador[indice_reg1] = int_var2;
                }
                if(var2[0] == 'R'){
                    int indice_reg2  = 0;
                    sscanf(var2,"R%d", &indice_reg2);
                    registrador[indice_reg1] = registrador[indice_reg2]; 
                }
            }
        }

        if(strcmp(instrucao,"ADD") == 0 ||strcmp(instrucao,"SUB") == 0 || strcmp(instrucao,"MUL") == 0 || strcmp(instrucao,"DIV") == 0 ||strcmp(instrucao,"MOD") == 0){
            sscanf(acoes[i], "%s %s %s %s", instrucao, var1, var2, var3);
            int indice_reg1 = 0;
            sscanf(var1,"R%d", &indice_reg1);
            int indice_reg2 = 0; 
            sscanf(var2,"R%d", &indice_reg2);
            int indice_reg3 = 0;   
            sscanf(var3,"R%d", &indice_reg3);
            aritimetica(acoes, instrucao, indice_reg1, indice_reg2, indice_reg3, registrador);  
        }  
       

    if(strcmp(instrucao,"BEQ") == 0 || strcmp(instrucao,"BLT") == 0 || strcmp(instrucao,"JMP") == 0 ){
        int endereco = 0;
        sscanf(acoes[i], "%s %s %s %d", instrucao, var1, var2, &endereco);
        int indice_reg1 = 0;
        sscanf(var1,"R%d", &indice_reg1);
        int indice_reg2 = 0; 
        sscanf(var2,"R%d", &indice_reg2);
        logi(registrador, instrucao, indice_reg1, indice_reg2, endereco, var1, &i);

        }

    if(strcmp(instrucao,"STORE") == 0 ||strcmp(instrucao,"LOAD") == 0){
        sscanf(acoes[i], "%s %s %s", instrucao, var1, var2);
        int indice_reg = 0;
        sscanf(var1,"R%d", &indice_reg);
        int indice_memoria = 0; 
        sscanf(var2,"R%d", &indice_memoria);
        memoria(instrucao, registrador, indice_reg, indice_memoria, memory);
        }
        if(strcmp(instrucao, "PRINT") == 0){
                sscanf(acoes[i], "%s %s", instrucao, var1);
                int indice_reg = 0;
                sscanf(var1, "R%d", &indice_reg);
                tela(indice_reg, registrador);
        }
        i++;
    }

   
}


    
    











