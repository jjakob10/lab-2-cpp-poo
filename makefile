main: main.o departamento.o funcionario.o
	g++ -o main departamento.o funcionario.o main.o

main.o: main.cpp
	g++ -c -o main.o main.cpp

departamento.o: Departamento.cpp Departamento.h Funcionario.h
	g++ -c -o departamento.o Departamento.cpp

funcionario.o: Funcionario.cpp Funcionario.h
	g++ -c -o funcionario.o Funcionario.cpp

run: main
	./main

clean:
	rm main *.o