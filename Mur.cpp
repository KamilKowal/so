#include "Mur.h"
#include <thread>
using namespace std;
Mur::Mur(Ekran *e) {
    this->e = e;
}
void Mur::work() {
    for (int i = 0; i < 5; ++i) {
    }
    for (int i = 0; i < (signed)threads.size(); ++i) {
        threads[i].join();
    }
}
bool Mur::random_bool(){
    return rand()%2==1;
}
void Mur::buduj(int tank_time, int runway_time,bool is_tanked,bool landed){
    drawQueue();
   // takeoff(runway_time);
}
void Mur::drawQueue(){
    kolejka.lock();
  //  s->drawRunwayQueue(runway_queue);
    kolejka.unlock();
}
