program: Main.o Mur.o Mur.o
	g++ -o program Main.o Ekran.o Mur.o -pthread -lncurses -std=c++11
Main.o: Main.cpp Mur.h
	g++ -c -Wall -pedantic Main.cpp -pthread -lncurses -std=c++11
Mur.o: Mur.h Mur.cpp Ekran.h
	g++ -c -Wall -pedantic Mur.cpp -pthread -lncurses -std=c++11
Ekran.o: Ekran.cpp Ekran.h
	g++ -c -Wall -pedantic Ekran.cpp -pthread -lncurses -std=c++11

