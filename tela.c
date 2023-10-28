#include <stdio.h>
#include <string.h>
#include "tela.h"

void tela(int indice_reg, int registrador[]){

    int linha; 
    linha = registrador[indice_reg];
    printf("%d\n", linha);


}