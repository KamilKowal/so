#include "Mur.h"
#include <thread>
#include <unistd.h>
using namespace std;
Mur::Mur(Ekran *e) {
    this->e = e;
}
void Mur::work() {
     for (int i = 0; i < 5; ++i) {
        int kolumna = rand() % 10 + 1;
        int w = 3;
      threads.push_back(std::thread(&Mur::buduj,this,kolumna,w));

    }
    for (int i = 0; i < (signed)threads.size(); ++i) {
        threads[i].join();
    }
}
bool Mur::random_bool(){
    return rand()%2==1;
}
void Mur::buduj(int czas, int col){  
    	e->moveCegla(15,10,1);
   	sleep(1);//poczekaj sekunde
}
void Mur::drawQueue(){
    kolejka.lock();
    //s->drawRunwayQueue(runway_queue);
    kolejka.unlock();
}
