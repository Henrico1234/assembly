#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "leitura.h"
#include "decodifica.h"


void leVetor(char acoes[][100],int N){
int i;
for( i = 0; i < N ; i++){
    fgets(acoes[i], sizeof(acoes[i]), stdin);
      }
decodifica(acoes, N);
return;
}