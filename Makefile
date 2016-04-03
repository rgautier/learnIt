CFLAGS=-Wall -g
all:
	g++ $(CFLAGS) learnIt.cpp -o learnIt
clean:
	rm -f learnIt
