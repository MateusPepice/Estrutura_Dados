all: main

main: main.o lista_ligada_cabeca.o
	gcc obj/main.o obj/lista_ligada_cabeca.o -o bin/main.out

lista_ligada_cabeca.o: src/lista_ligada_cabeca.c include/lista_ligada_cabeca.h
	gcc -I include -Wall -Werror -c src/lista_ligada_cabeca.c -o obj/lista_ligada_cabeca.o

main.o: apps/main.c include/lista_ligada_cabeca.h
	gcc -I include -Wall -Werror -c apps/main.c -o obj/main.o

run: 
	./bin/main.out

clean:
	rm -f bin/main.out obj/*.o