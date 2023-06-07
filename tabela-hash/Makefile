all: app_main

app_main: app_main.o tabela_hash.o  
	gcc obj/app_main.o obj/tabela_hash.o -o bin/app_main.out		

tabela_hash.o: src/tabela_hash.c include/tabela_hash.h
	gcc -I include -Wall -Werror -c src/tabela_hash.c -o obj/tabela_hash.o


app_main.o: apps/app_main.c include/tabela_hash.h
	gcc -I include -Wall -Werror -c apps/app_main.c -o obj/app_main.o

run:
	./bin/app_main.out

clean:
	rm -f bin/app_main.out obj/*.o	
#del bin\app_main.out obj\*.o 	