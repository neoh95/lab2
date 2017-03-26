main: class.o main.o
	g++ -o main main.o class.o

class.o: class.cpp class.h
	g++ -c class.cpp

main.o: main.cpp class.h
	g++ -c main.cpp

clean:
	rm main
	rm class.o
	rm main.o
