#include <mutex>
#include "Ekran.h"
#include <thread>
#include <vector>
class Mur{
private:
	std::mutex kolejka;
	Ekran *e;
	bool random_bool();
	void drawQueue();
	void buduj(int,int);
	std::vector<std::thread> threads;//wektor watkow
public:
	Mur(Ekran*);
    	void work();
	
};
