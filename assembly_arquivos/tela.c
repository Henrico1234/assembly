#include <stdio.h>
#include <string.h>
#include "tela.h"

void tela(int indice_reg, int registrador[]){

    //mostra na tela o valor de registrador especificado
    int linha; 
    linha = registrador[indice_reg];
    printf("%d\n", linha);


}