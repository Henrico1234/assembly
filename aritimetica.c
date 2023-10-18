#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "aritimetica.h"


void aritimetica(char aux[][100], char instrucao[], char op1[], char op2[], char op3[]){
int r[32][5];
int i;
if(strcmp(instrucao,"ADD") == 0){
        op1[0] = '0';
        op2[0] = '0';
        op3[0] = '0';
        r[atoi(op1)] = r[atoi(op2)] + r[atoi(op3)];
}
if(strcmp(instrucao,"SUB") == 0){
        op1[0] = '0';
        op2[0] = '0';
        op3[0] = '0';
        r[atoi(op1)] = r[atoi(op2)] - r[atoi(op3)];
}
if(strcmp(instrucao,"MUL") == 0){
        op1[0] = '0';
        op2[0] = '0';
        op3[0] = '0';
        r[atoi(op1)] = r[atoi(op2)] * r[atoi(op3)];
}
if(strcmp(instrucao,"DIV") == 0){
        op1[0] = '0';
        op2[0] = '0';
        op3[0] = '0';
        r[atoi(op1)] = r[atoi(op2)] / r[atoi(op3)];
}
if(strcmp(instrucao,"MOD") == 0){
        op1[0] = '0';
        op2[0] = '0';
        op3[0] = '0';
        r[atoi(op1)] = r[atoi(op2)] % r[atoi(op3)];
        if(r[atoi(op1)] < 0){
            r[atoi(op1)] = r[atoi(op1)] + r[atoi(op3)];
        }
}
}
