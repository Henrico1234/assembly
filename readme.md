# projeto 2 programação de computadores 1
## autor
Nome:Henrico Costa Correia 
Instituição: Instituto Fedaral De Brasília
Disciplina: PC1 (Daniel Saad)

### Descrição do codigo(implementação)
O Codigo se trata de um simuladr simples de assembly na linguagem C. Ele permite a vc escrever e Executar programas em um conjunto de instruções de um assembly customizado

### Modo de Uso

1. **compilação** para compilar o codigo, na pasta que ele estiver, execute o seguinte comando no terminal:
make (fara com que todos os files compilem de uma vez)
logo após escreva "./main"

2. **Execução**  O código assembly pode ser escrito diretamente no simulador, seguindo a sintaxe específica implemetada, e de um
"ENTER"

3. **Saida** Caso gere um resultado e for pedido para exibir ele 
com os camando implementados, ele aparecera logo após a fim do programa

## EXEMPLOS
MOV R1 10: Move um numero inteiro 10, para o regostrador R1<br>
MOV R1 R2: Move o interio aramazenado em R2 para R1
ADD(SOMA), SUB(SUBTRAÇÃO), MUL(MULTIPLICAÇAO), DIV(DIVISÃO), MOD(RESTO DA DIVISÃO), sempre entre dois registradores exemplo:
ADD R1 R2
BEQ R1 R2 5: Se R1 e R2 forem iguais pula para a linha 5
BLT R1 R2 5: Se R1 for menor que R2 pula para a linha 5
JMP 5: pula para a linha 5
LOAD R1 R2: Carrega o conteudo de memoria alocado no determinado indece, que é o valor de R2, Para o Registrador R1
STORE R1 R2: Carrega o conteudo do registrador R1 para a memoria cujo o indice é o valor de R2
PRINT R1: Aparece na tela o valor do registrador R1
EXIT: Encerra o programa

### Cosiderações finais
O projeto teve como uso bibliotecas simples "stdio.h, string.h"
e gira em torno de matrizes e vetores e o uso de ponteiro gerou muita facilidade para os termos que mudavam as linhas do programa




