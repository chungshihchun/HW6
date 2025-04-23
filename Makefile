all: HW06

HW06: main.o
	g++ -std=c++14 -o HW06 main.o

main.o: main.cpp sorting_function.cpp
	g++ -std=c++14 -c main.cpp

clean:
	rm -rf *.o HW06
