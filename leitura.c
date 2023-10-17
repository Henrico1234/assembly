#include <stdio.h>
#include <string.h>
#include "leitura.h"
#include "decodifica.h"


void leVetor(char acoes[][100],int N){
int i;
char aux[100][100];
for( i = 0; i < N ; i++){
    
    fgets(acoes[i], sizeof(acoes[i]), stdin);
    strcpy(aux[i],acoes[i]);
      }
decodifica(aux, N);
return;
}