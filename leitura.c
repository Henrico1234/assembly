#include <stdio.h>
#include <string.h>
#include "leitura.h"
#include "decodifica.h"


void leVetor(char acoes[][100],int N){
int i;
char teste[10];
for( i = 0; i < N ; i++){
    fgets(acoes[i], sizeof(acoes[i]), stdin);
    sscanf(acoes[i], "%s", teste);
    if(strcmp(teste, "EXIT") == 0){
        break;
      }
    }
  decodifica(acoes, N);
}
