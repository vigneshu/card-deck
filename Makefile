default:
	g++ -c -w -std=c++11 PokerDeck.cpp
	g++ -c -w -std=c++11 Card.cpp
	g++ -c -w -std=c++11 main.cpp
	g++ -o output -w -std=c++11 main.o Card.o PokerDeck.o

clean:
	rm -f *.o output
