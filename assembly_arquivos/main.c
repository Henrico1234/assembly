#include <stdio.h>
#include <string.h>
#include "leitura.h"
 
//a Main apenas pergunta o Numero de linhas e chama a função leVetor para ler a matriz
int main(){
    int N; 
    char acoes[100][100];
    scanf("%d", &N);
    getchar();
    leVetor(acoes, N);
return 0;
}
