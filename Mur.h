#include <mutex>
#include "Ekran.h"
#include <thread>
#include <vector>
class Mur{
private:
	std::mutex kolejka;
	Ekran *e;
	bool random_bool();
   	void service(int,int,bool,bool);
	void drawQueue();
	void buduj(int,int,bool,bool);
	std::vector<std::thread> threads;//wektor watkow
public:
	Mur(Ekran*);
    	void work();
	
};
