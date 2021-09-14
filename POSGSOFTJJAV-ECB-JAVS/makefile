all: compilar
compilar: criterio calificacion acta archivo view main
	g++ -o ejecutable Criterio.o Calificacion.o Acta.o Archivo.o View.o Main.o
criterio: Criterio.cpp Criterio.h
	g++ -c Criterio.cpp
calificacion: Calificacion.cpp Calificacion.h
	g++ -c Calificacion.cpp
acta: Acta.cpp Acta.h Calificacion.h
	g++ -c Acta.cpp
archivo: Archivo.cpp Archivo.h Criterio.h Acta.h Calificacion.h  
	g++ -c Archivo.cpp
view: View.cpp View.h Archivo.h
	g++ -c View.cpp
main: Main.cpp View.h 
	g++ -c Main.cpp
clean: #comando para borrar los .o
	@echo "Cleaning compilation..."
	del *.o