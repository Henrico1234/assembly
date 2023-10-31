#include <stdio.h>
#include <string.h>
#include "leitura.h"
#include "decodifica.h"

//A função levetor le linha a linha da matriz fornecida e le ate chegar no N(numero de linhas) fornecido
void leVetor(char acoes[][100],int N){
int i;
char teste[10];
for( i = 0; i < N ; i++){
    fgets(acoes[i], sizeof(acoes[i]), stdin);
    sscanf(acoes[i], "%s", teste);
    }
  decodifica(acoes, N);//chamando a função para decodifcar
}
