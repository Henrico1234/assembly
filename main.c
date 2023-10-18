#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "leitura.h"
 

int main(){
int N; 
char acoes[100][100];
scanf("%d", &N);
getchar();
leVetor(acoes, N);
return 0;
 }
