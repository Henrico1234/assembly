#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "leitura.h"
#include "decodifica.h"


void leVetor(char acoes[][100],int N){
int i;
char tes[5];
for( i = 0; i < N ; i++){
    fgets(acoes[i], sizeof(acoes[i]), stdin);
    sscanf(acoes[i], "%s", tes);
   if(strcmp(tes, "EXIT") == 0){
   break;
      }
}
      decodifica(acoes, N);
}
