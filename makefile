a.out: deck.o gameController.o  main.o
	g++ deck.o    gameController.o  main.o
main.o: main.cpp
	g++ -c main.cpp
gameController.o: gameController.h gameController.cpp
	g++ -c gameController.cpp
deck.o: deck.h deck.cpp
	g++ -c deck.cpp
clean:
	rm *.o a.out