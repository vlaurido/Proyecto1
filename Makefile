pruebaLista: src/pruebaLista.c
	gcc -Wall -Iinclude/ -c src/pruebaLista.c -o obj/prueba.o

objetos:
	gcc -Wall -fPIC -Iinclude/ -c src/Lista_Primero*.c -o obj/ListaPrimero.o
	gcc -Wall -fPIC -Iinclude/ -c src/Lista_Vacia*.c -o obj/ListaVacia.o
	

#Permite borrar los archivos .so, .o y ejecutables al escribir make clean
.PHONY: clean
clean:
	rm -f obj/*.o lib/*.so bin/*
