all: main.o functions.dll
	main.o -o main.exe
main.o: main.cpp functions.h
	main.cpp -o main.o
functions.dll: base.o gcd.o
	base.o gcd.o -o functions.dll
base.o: base.cpp functions.h
	base.cpp -o base.o
gcd.o: gcd.cpp functions.h
	gcd.cpp -o gcd.o
clean:
	rm -f *.o
