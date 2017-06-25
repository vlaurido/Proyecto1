prueba: pruebaLista libmilista
	gcc -Llib/ obj/prueba.o obj/Lista*.o -lmilista -o bin/prueba

pruebaLista: ./src/pruebaLista.c
	gcc -Wall -Iinclude/ -c src/pruebaLista.c -o obj/prueba.o

objects:
	gcc -Wall -Iinclude/ -c src/Lista*.c
	mv -f *.o obj/

libmilista: ./src/Lista*.c
	gcc -Wall -Iinclude/ -shared -fPIC src/Lista*.c -o lib/libmilista.o
	

#Permite borrar los archivos .so, .o y ejecutables al escribir make clean
.PHONY: clean
clean:
	rm -f obj/*.o lib/*.so bin/*
