REC = main.c leitura.c decodifica.c logi.c memoria.c tela.c aritimetica.c
EXE = $(REC:.c=.o)

main: $(EXE)
	gcc -Wall $(EXE) -o main

$(EXE): $(REC)
	gcc -Wall -c $(REC)

clean:
	rm main $(EXE)	
