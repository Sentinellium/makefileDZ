all:run

run: main.o base.o gcd.o
	g++ main.o base.o gcd.o -o run

main.o: main.cpp
	g++ -c main.cpp

base.o: base.cpp
	g++ -c base.cpp

gcd.o: gcd.cpp
	g++ -c gcd.cpp

clean:
	rm rf *.o run
