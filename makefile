all: main

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp

main.o: main.cpp BrazoRobotico.h
	g++ -c main.cpp

main: main.o BrazoRobotico.o
	g++ -o main main.o BrazoRobotico.o

clean:
	rm -f *.o main

test: all
	./main
