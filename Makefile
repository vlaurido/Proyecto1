pruebaLista: src/pruebaLista.c
	gcc -Wall -Iinclude/ -c src/pruebaLista.c -o obj/prueba.o

objetos:
	gcc -Wall -fPIC -Iinclude/ -c src/Lista_Inicializar.c -o obj/ListaInicializar.o
	gcc -Wall -fPIC -Iinclude/ -c src/Lista_Vacia.c -o obj/ListaVacia.o
	gcc -Wall -fPIC -Iinclude/ -c src/Lista_Conteo.c -o obj/ListaConteo.o
	gcc -Wall -fPIC -Iinclude/ -c src/Lista_Buscar.c -o obj/ListaBuscar.o
	gcc -Wall -fPIC -Iinclude/ -c src/Lista_InsertarInicio.c -o obj/ListaInsertarInicio.o
	gcc -Wall -fPIC -Iinclude/ -c src/Lista_InsertarFin.c -o obj/ListaInsertarFin.o
	gcc -Wall -fPIC -Iinclude/ -c src/Lista_Sacar.c -o obj/ListaSacar.o
	gcc -Wall -fPIC -Iinclude/ -c src/Lista_SacarTodos.c -o obj/ListaSacarTodos.o
	gcc -Wall -fPIC -Iinclude/ -c src/Lista_InsertarDespues.c -o obj/ListaInsertarDespues.o
	gcc -Wall -fPIC -Iinclude/ -c src/Lista_InsertarAntes.c -o obj/ListaInsertarAntes.o
	gcc -Wall -fPIC -Iinclude/ -c src/Lista_Primero.c -o obj/ListaPrimero.o
	gcc -Wall -fPIC -Iinclude/ -c src/Lista_Ultimo.c -o obj/ListaUltimo.o
	gcc -Wall -fPIC -Iinclude/ -c src/Lista_Siguiente.c -o obj/ListaSiguiente.o
	gcc -Wall -fPIC -Iinclude/ -c src/Lista_Anterior.c -o obj/ListaAnterior.o
	

#Permite borrar los archivos .so, .o y ejecutables al escribir make clean
.PHONY: clean
clean:
	rm -f obj/*.o lib/*.so bin/*
