all: main

main: main.o lista_ligada.o
	gcc obj/main.o obj/lista_ligada.o -o bin/main.out

lista_ligada.o: src/lista_ligada.c include/lista_ligada.h
	gcc -I include -Wall -Werror -c src/lista_ligada.c -o obj/lista_ligada.o

main.o: apps/main.c include/lista_ligada.h
	gcc -I include -Wall -Werror -c apps/main.c -o obj/main.o

run: 
	./bin/main.out

clean:
	rm -f bin/main.out obj/*.o