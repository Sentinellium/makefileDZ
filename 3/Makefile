all: main.o functions.dll
	g++ -L./ -l functions -std=gnu++11 -O0 -Wall -Wextra -DCEMA main.o -o main.exe
main.o: main.cpp functions.h
	g++ -c -std=gnu++11 -O0 -Wall -Wextra -DCEMA main.cpp -o main.o
functions.dll: base.o gcd.o
	g++ -shared -std=gnu++11 -O0 -Wall -Wextra -DCEMA base.o gcd.o -o functions.dll
base.o: base.cpp functions.h
	g++ -c -std=gnu++11 -O0 -Wall -Wextra -DCEMA base.cpp -o base.o
gcd.o: gcd.cpp functions.h
	g++ -c -std=gnu++11 -O0 -Wall -Wextra -DCEMA gcd.cpp -o gcd.o
clean:
	rm -f *.o
