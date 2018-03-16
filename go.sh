g++ -c -Wall -pedantic Main.cpp -pthread -lncurses -std=c++11
g++ -c -Wall -pedantic Mur.cpp -pthread -lncurses -std=c++11
g++ -c -Wall -pedantic Ekran.cpp -pthread -lncurses -std=c++11
g++ -o program Main.o Ekran.o Mur.o -pthread -lncurses -std=c++11
